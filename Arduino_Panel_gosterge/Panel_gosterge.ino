#include <Wire.h>
#define VT_pin A0
#define AT_pin A1

unsigned long previousMillis= 0;  
const long interval = 100;    
int i=0;     
                  
unsigned long previousMillis_2 = 0;  
const long interval_2 = 150;   
int x=0;      

unsigned long previousMillis_3 = 0;  
const long interval_3 = 200 ;         
int z=0;
/////////// V / A SENSOR /////////
const int currentPin = A0; 
const int voltagePin = A1; 
const float referenceVoltage = 5.0; 




void setup() {
  Serial.begin(9600); 
}

void loop() {
  unsigned long currentMillis = millis();
    double vt_deger = analogRead(VT_pin);
  double at_deger = analogRead(AT_pin);
  double voltaj_kalibre = 4.0;
  double amper_kalibre = 0.05;
  double voltaj = vt_deger * (5.0 / 1023.0) * voltaj_kalibre ; 
  double amper = at_deger * (5.0 / 1023.0) * amper_kalibre ;
  double power = voltaj * amper;

  
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    Serial.print("i=");
    Serial.print(voltaj);
 
  }

  
  if (currentMillis - previousMillis_2 >= interval_2) {
    previousMillis_2 = currentMillis;
     Serial.print(",x=");
  Serial.print(amper);
  }

  // z değeri için
  if (currentMillis - previousMillis_3 >= interval_3) {
    previousMillis_3 = currentMillis;
    
  Serial.print(",z=");
  Serial.println(power);
}
}
