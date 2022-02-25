#include <LED_8FF.h>
#include <Arduino.h>

LED::LED(int pin1, int pin2, int pin3, int pin4, int pin5) {

    pinMode(pin_1, OUTPUT);
    pinMode(pin_2, OUTPUT);
    pinMode(pin_3, OUTPUT);
    pinMode(pin_4, OUTPUT);
    pinMode(pin_5, OUTPUT);
   
    pin_1 = pin1;
    pin_2 = pin2;
    pin_3 = pin3;
    pin_4 = pin4;
    pin_5 = pin5;

}

void LED::LED01(int time) {

    digitalWrite(pin_1, HIGH);
    delay(time);
    digitalWrite(pin_1, LOW);
    delay(time);
    digitalWrite(pin_2, HIGH);
    delay(time);
    digitalWrite(pin_2, LOW);
    delay(time);
    digitalWrite(pin_3, HIGH);
    delay(time);
    digitalWrite(pin_3, LOW);
    delay(time);
    digitalWrite(pin_4, HIGH);
    delay(time);
    digitalWrite(pin_4, LOW);
    delay(time);
    digitalWrite(pin_5, HIGH);
    delay(time);
    digitalWrite(pin_5, LOW);
    delay(time);
    
}

void LED::LED02(int time) {

    digitalWrite(pin_1, HIGH);
    digitalWrite(pin_2, HIGH);
    delay(time);
    digitalWrite(pin_1, LOW);
    digitalWrite(pin_2, LOW);
    delay(time);
    digitalWrite(pin_3, HIGH);
    digitalWrite(pin_4, HIGH);
    delay(time);
    digitalWrite(pin_3, LOW);
    digitalWrite(pin_4, LOW);
    delay(time);
    digitalWrite(pin_5, HIGH);
    delay(time);
    digitalWrite(pin_5, LOW);
    delay(time);
    
}

void LED::LED03(int time) {

    digitalWrite(pin_1, HIGH);
    digitalWrite(pin_2, HIGH);
    digitalWrite(pin_3, HIGH);
    digitalWrite(pin_4, HIGH);
    delay(time);
    digitalWrite(pin_1, LOW);
    digitalWrite(pin_2, LOW);
    digitalWrite(pin_3, LOW);
    digitalWrite(pin_4, LOW);
    delay(time);
    digitalWrite(pin_5, HIGH);
    delay(time);
    digitalWrite(pin_5, LOW);
    delay(time);
    
}

void LED::LED04(int time) {

    digitalWrite(pin_1, HIGH);
    digitalWrite(pin_2, HIGH);
    digitalWrite(pin_3, HIGH);
    digitalWrite(pin_4, HIGH);
    digitalWrite(pin_5, HIGH);
    delay(time);
    digitalWrite(pin_1, LOW);
    digitalWrite(pin_2, LOW);
    digitalWrite(pin_3, LOW);
    digitalWrite(pin_4, LOW);
    digitalWrite(pin_5, LOW);
    delay(time);
    
}

void LED::LED05() {

    digitalWrite(pin_1, HIGH);
    digitalWrite(pin_2, HIGH);
    digitalWrite(pin_3, HIGH);
    digitalWrite(pin_4, HIGH);
    digitalWrite(pin_5, HIGH);
  
}
