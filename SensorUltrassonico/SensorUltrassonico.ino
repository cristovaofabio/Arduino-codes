#include <Ultrasonic.h>
#define PINO_TRG  7
#define PINO_ECHO 6
//Inicializa o sensor ultrasonico nos pinos especificados
Ultrasonic ultrasonic(PINO_TRG, PINO_ECHO);
void setup()
{
  Serial.begin(9600);//Inicializa a serial
}

void loop()
{
  float cm;
  long microsec = ultrasonic.timing();  //Le o valor do sensor ultrassonico
  //Atribui os valores em cm ou polegadas as variaveis
  cm = ultrasonic.convert(microsec, Ultrasonic::CM);
  //Mostra os valores na serial
  Serial.print("Centimetros: ");
  Serial.print(cm);
  delay(1000); //Espera 1 segundo e reinicia o processo
}
