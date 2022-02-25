#include <Arduino.h>
#include <LED_8FF.h>

LED led(1, 2, 3, 4, 5);

void setup() {

  led.LED05();
  delay(1000);
  
}

void loop() {

  led.LED01(1000);
  delay(1000);
  led.LED02(1000);
  delay(1000);
  led.LED03(1000);
  delay(1000);
  led.LED04(1000);
  delay(1000);

}