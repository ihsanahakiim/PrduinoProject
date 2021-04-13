int a,b,c,d;
void setup() {
 Serial.begin(9600);
}

void loop() {
  a = analogRead(0);
  b = analogRead(1);
  c = analogRead(2);
  d = analogRead(3);
Serial.println(" ");
  Serial.print("a : ");
  Serial.println(a);
 Serial.print("b : ");
  Serial.println(b);
  Serial.print("c : ");
  Serial.println(c);
  Serial.print("d : ");
  Serial.println(d);
  delay(500);
}
