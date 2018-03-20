int lm35pin=A0;
void setup() {
Serial.begin(9600);  // put your setup code here, to run once:

}

void loop() {
  int analogvalue;// put your main code here, to run repeatedly:
  float temp;
  analogvalue =analogRead(lm35pin);
  temp=float(analogvalue)/1023;
  temp=temp*500;
  Serial.print("Temp");
  Serial.print(temp);
  Serial.println("C");
  delay(1000);
}
