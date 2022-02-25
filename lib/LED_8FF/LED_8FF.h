#ifndef LED_8FF_h
#define LED_8FF_h

#include <Arduino.h>

class LED
{
private:
    
    int pin_1;
    int pin_2;
    int pin_3;
    int pin_4;
    int pin_5;

public:
    LED(int pin1, int pin2, int pin3, int pin4, int pin5);
    void LED01(int time);
    void LED02(int time);
    void LED03(int time);
    void LED04(int time);
    void LED05();

};

#endif