const int entrada = A0; // Define o pino que lera a saída do LM35
float temperatura; // Variável que armazenará a temperatura medida
void setup() {
  Serial.begin(9600); // inicializa a comunicação serial
}
void loop() {
  temperatura = (float(analogRead(entrada))*5/(1023))/0.01;
  Serial.print("Temperatura: ");
  Serial.println(temperatura);
  delay(2000);//espera 2 segundos
}
