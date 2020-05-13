void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
String s;
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    s = Serial.readString();
    Serial.println(s);
    Serial.println(s.startsWith("+CMT"));
  }
}
