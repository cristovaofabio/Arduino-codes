float temp;
void setup(){
  Serial.begin(9600);
}
void loop(){
  if(Serial.available()>=21){
    if(Serial.read()==0x7E){
      for(int i=1;i<19;i++){
        byte discardByte = Serial.read();
      }
    int analogMSB=Serial.read();
    int analogLSB=Serial.read();
    int analogReading = analogLSB+(analogMSB*256);
    temp =analogReading*5/1023.0;
    //temp = temp - 0.5;
    temp = temp / 0.01; //esta em c
    //converte para f
    temp= temp * 9/5 + 32;
    Serial.print(temp);
    Serial.println(" degrees F");
    }
  }
}
