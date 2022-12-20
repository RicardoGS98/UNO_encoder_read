#include <Arduino.h>
#include <UNO_velocidad.h>

// Pins
#define PIN_ENCA 3
#define PIN_PWM 6

float start = 0;
void readEncoder()
{
  UNO_velocidad_U.PPMICRO++;
}

void setup()
{
  UNO_velocidad_initialize();
  pinMode(PIN_PWM, OUTPUT);
  pinMode(PIN_ENCA, INPUT);
  attachInterrupt(digitalPinToInterrupt(PIN_ENCA),
                  readEncoder, RISING);

  UNO_velocidad_U.SET_POINT = 60;
  Serial.begin(57600);
}

void loop()
{
  UNO_velocidad_step();
  analogWrite(6, UNO_velocidad_Y.PWM);

  if (millis() - start > 100)
  {
    Serial.print("VELOCIDAD:");
    Serial.println(UNO_velocidad_Y.VELOCIDAD);
    // Serial.print(",");
    // Serial.print("PWM:");
    // Serial.print(UNO_velocidad_Y.PWM);
    // Serial.print(",");
    // Serial.print("ERROR:");
    // Serial.println(UNO_velocidad_Y.ERROR);
    start = millis();
  }
  delay(0.5);
}