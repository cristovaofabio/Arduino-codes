#include <RCSwitch.h>
//Instacia a Biblioteca
RCSwitch mySwitch = RCSwitch();
int led=13;
//variavel responsavel em receber os dados do RF
int value =-2;
void setup() {
  pinMode(led,OUTPUT); 
  Serial.begin(9600);
  delay(50);
  //Seta como Receptor/ O "0" é para não interromper, deixar continuo
  //O Pino padrão é o 2
  mySwitch.enableReceive(0);
}
void loop() {
  if (mySwitch.available()) {
  //recebe na variavel value o Status
  value = mySwitch.getReceivedValue();
  if (value == 0) {
    Serial.println("Codigo desconhecido");    
  }
  if(value ==2){  
    Serial.println(mySwitch.getReceivedValue());
    digitalWrite(led, HIGH);
  }
  if(value ==1){  
      Serial.println(mySwitch.getReceivedValue());  
      digitalWrite(led, LOW);  
  }
  mySwitch.resetAvailable();     
  }
}

