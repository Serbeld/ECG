/*
   Heart Monitor
   Autor: Thiago <tsprates@hotmail.com>
*/
void setup() {
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}

void loop() {
  Serial.println(analogRead(A0));
  delay(1);
}

