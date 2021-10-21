void setup() {
//test voltage output
Serial.begin(9600);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
}
int val =0;

void loop() {
val=analogRead(0);
Serial.println(val);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);

if(val > 100)
{
  digitalWrite(3, HIGH);
} 
else digitalWrite(3, LOW);

if(val > 140)
{
  digitalWrite(4, HIGH);
}
else digitalWrite(4, LOW);

if(val > 220)
{
  digitalWrite(5, HIGH);
}
else digitalWrite(5, LOW);

if(val > 340)
{
  digitalWrite(6, HIGH);
}
else digitalWrite(6, LOW);

if(val > 600)
{
  digitalWrite(7, HIGH);
}
}
