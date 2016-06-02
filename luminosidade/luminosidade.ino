//Pino analógico em que o sensor está conectado.
int sensor = 0;      
//variável usada para ler o valor do sensor em tempo real.
int valor; 
void setup(){
  Serial.begin(9600);
}
//Método loop, executado enquanto o Arduino estiver ligado.
void loop(){
  //Lendo o valor do sensor.
  int valor = analogRead(sensor);
  Serial.println(valor);
  delay(1000); 
}
