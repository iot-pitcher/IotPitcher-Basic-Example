#include <pitcher.h>

int sensorPin = 32;

void setup() {
    /*
        Pitcher needs to initialize its environment before everything, so this must be called before the program
    */
    pitcher_start();
}

char valueString[10];

void loop() {
  float distance= (analogRead(sensorPin)/4096.0)*25.0;
  sprintf(valueString,"%f mm",distance);
  pitcher_set_sensor_value_distance(valueString);
  delay(1000);
}
