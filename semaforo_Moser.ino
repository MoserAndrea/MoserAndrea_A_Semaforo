int red1 = 7
int yellow1 = 6
int green1 = 5
int red2 = 4
int yellow2 = 3
int green2 = 2

void setup() {
  // put your setup code here, to run once:
pinMode(red1, OUTPUT);
pinMode(yellow1, OUTPUT);
pinMode(green1, OUTPUT);
pinMode(red2, OUTPUT;)
pinMode(yellow2, OUTPUT);
pinMode(green2, OUTPUT);
}
void lampeggia1() 
{
  digitalWrite(green1, HIGH);
  delay(500);
  digitalWrite(green1, LOW);
  delay(500);
  digitalWrite(green1, HIGH);
  delay(500);
  digitalWrite(green1, LOW);
  delay(500);
  digitalWrite(green1, HIGH);
  delay(500);
  digitalWrite(green1, LOW);
  delay(500);
  digitalWrite(green1, HIGH);
  delay(500);
  digitalWrite(green1, LOW);
  delay(500);
}
void lampeggia2()
{
  digitalWrite(green2, HIGH);
  delay(500);
  digitalWrite(green2, LOW);
  delay(500);
  digitalWrite(green2, HIGH);
  delay(500);
  digitalWrite(green2, LOW);
  delay(500);
  digitalWrite(green2, HIGH);
  delay(500);
  digitalWrite(green2, LOW);
  delay(500);
  digitalWrite(green2, HIGH);
  delay(500);
  digitalWrite(green2, LOW);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red1, HIGH);
digitalWrite(green2, HIGH);
delay(5000);
digitalWrite(yellow1, HIGH);
lampeggia2();
digitalWrite(red1, LOW);
digitalWrite(yellow1, LOW);
digitalWrite(green1, HIGH);
digitalWrite(yellow2, HIGH);
delay(1000);
digitalWrite(red2, HIGH);
delay(5000);
digitalWrite(yellow2, HIGH);
lampeggia1();
digitalWrite(red2, LOW);
digitalWrite(green2, HIGH);
digitalWrite(yellow2, LOW);
digitalWrite(yellow1, HIGH);


}
