#include <Wire.h>
#include <Adafruit_ADS1X15.h> 

Adafruit_ADS1015 ads;
  
const float FACTOR = 30; //30A/1V

const float multiplier = 0.0625F;
 
void setup()
{
  Serial.begin(115200);
 
  ads.setGain(GAIN_TWO);        // ±2.048V  1 bit = 0.0625mV
  ads.begin();
}

void printMeasure(String prefix, float value, String postfix)
{
 Serial.print(prefix);
 Serial.print(value, 3);
 Serial.println(postfix);
}
 
void loop()
{
 float currentRMS = getCorriente();
 float power = 230.0 * currentRMS;
 
 printMeasure("Irms: ", currentRMS, "A ,");
 printMeasure("Potencia: ", power, "W");
 delay(1000);
}
 
float getCorriente()
{
 float voltage;
 float corriente;
 float sum = 0;
 long tiempo = millis();
 int counter = 0;
 
 while (millis() - tiempo < 1000)
 {
   voltage = ads.readADC_Differential_0_1() * multiplier;
   corriente = voltage * FACTOR;
   corriente /= 1000.0;
 
   sum += sq(corriente);
   counter = counter + 1;
  }
 
 corriente = sqrt(sum / counter);
 return(corriente);
}
