
#include "thingProperties.h"

int LDR=36;
int led_pin=21;
 int i=0;
void setup() {
  pinMode(LDR,INPUT);
  pinMode(led_pin,OUTPUT);
  Serial.begin(9600);
 
  delay(1500); 

 
  initProperties();


  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  

  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  delay(500);
 
  if(i>500)
  {
    intensity=analogRead(LDR)+random(4,13);
  }
  else
  {
  intensity=analogRead(LDR)+random(15,20);
  }
  if(intensity<15)
 {
    
    led=true;
    i-=random(3,4);
 }
 
  else
  {
    
    led=false;
    i+=random(3,4);
  }
  

  onLEDChange(); 
}





void onLEDChange()  {

  if(led)
 {
    digitalWrite(led_pin,HIGH);
 }
 
  else
  {
    digitalWrite(led_pin,LOW);
  
  }
  
}
