#include <Arduino.h>
#include <config.h>

/*
  # Example code for the moisture sensor
  # Editor     : Lauren
  # Date       : 13.01.2012
  # Version    : 1.0
  # Connect the sensor to the A0(Analog 0) pin on the Arduino board

  # the sensor value description
  # 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water
*/

#define ANALOG_SOIL_MOISTURE_PIN A0

void setup()
{
  Serial.begin(SERIAL_BAUD_RATE);
}

void loop()
{

  Serial.print("Moisture Sensor Value:");
  double moisture = analogRead(ANALOG_SOIL_MOISTURE_PIN);

  if (moisture < 300)
  {
    Serial.print("Soil is dry: ");
    Serial.println(moisture);
  }
  if (moisture >= 300 && moisture < 700)
  {
    Serial.print("Soil is humid: ");
    Serial.println(moisture);
  }
  if (moisture >= 700)
  {
    Serial.print("Soil is TOO Wet: ");
    Serial.println(moisture);
  }

  delay(1000);
}