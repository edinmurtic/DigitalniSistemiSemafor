/*
 * File:   newmain.c
 * Author: Edin
 *
 * Created on November 10, 2021, 3:54 PM
 */


// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.



#define _XTAL_FREQ 8000000

#include <xc.h>

 void y3ellow()
    {
                    int br=0;
                    while(br<5)
                    {
                    br++;
                    RB1=1;
                    __delay_ms(400);
                    RB1=0;
                    __delay_ms(400);}
 }
void main(void) {
        TRISB0 = 0; //IZLAZNI PIN -> 0
    TRISB1 = 0; //IZLAZNI PIN -> 0
    TRISB2 = 0; //IZLAZNI PIN -> 0
    TRISB3 = 0; //IZLAZNI PIN -> 0
    TRISB4 = 0; //IZLAZNI PIN -> 0
    TRISC0 = 1; //IZLAZNI PIN -> 0
   
    while(1)
    {
        
        if(RC0==1)
        {
    RB0=0;
    RB1=0;
    RB2=1;
    RB3=1;
    RB4=0;
    __delay_ms(5);
    if (RC0==0)
    {
    RB0=0;
    RB2=0;
    RB3=1;
    RB4=0; 
    y3ellow();
    RB0=1;
    RB1=0;
    RB2=0;
    RB3=0;
    RB4=1; 
    __delay_ms(4000);
        RB0=0;
    y3ellow();
    }
        }}    
    return;
}
