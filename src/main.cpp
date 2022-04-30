#include <Arduino.h>
#include <ContadorDescendente.h>

ContadorDescendente C1(25) ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
    --C1;--C1; 
    Serial.println (C1.GetCont()) ;
    ++C1;++C1; 
    Serial.println (C1.GetCont()) ;
    delay(1000);
    }
 
