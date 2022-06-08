#include "PWM_op.h"

// Set PWM channel 1
// See datasheet for more info
void pwm_1_set(void){
    TRISCbits.TRISC2=1; // Use appropriate pin of your pic
    T2CON=0x04;
    PR2=0xFF;
    TRISCbits.TRISC2=0;// Use appropriate pin of your pic
    CCP1CON=0x1C;
    CCPR1L=0x00;
    return;
}

// Set PWM channel 2
// See datasheet for more info
void pwm_2_set(void){
    TRISBbits.TRISB3=1; // Use appropriate pin of your pic
    T2CON=0x04;
    PR2=0xFF;
    TRISBbits.TRISB3=0; // Use appropriate pin of your pic
    CCP2CON=0x1C;
    CCPR2L=0x00;
    return;
}

// Change duty cycle of channel 1
void set_duty_1(uint8_t duty){
    CCPR1L = duty;
}

// Change duty cycle of channel 2
void set_duty_2(uint8_t duty){
    CCPR2L = duty;
}