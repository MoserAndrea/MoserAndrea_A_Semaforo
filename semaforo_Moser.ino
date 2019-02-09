int red1 = 7;
int yellow1 = 6;
int green1 = 5;
int red2 = 4;
int yellow2 = 3;
int green2 = 2;
int temp1 = 5000;
int temp2 = 1000;
int tempLamp1 = 500;
int tempLamp2 = 500;
int durRosso = 0;
int durGiallo = 0;
int durLampeggi = 0;
int numLampeggi = 0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);


pinMode(red1, OUTPUT);
pinMode(yellow1, OUTPUT);
pinMode(green1, OUTPUT);
pinMode(red2, OUTPUT);
pinMode(yellow2, OUTPUT);
pinMode(green2, OUTPUT);
}
void lampeggia1() 
{
  digitalWrite(green1, HIGH);
  delay(tempLamp1);
  digitalWrite(green1, LOW);
  delay(tempLamp1);
  digitalWrite(green1, HIGH);
  delay(tempLamp1);
  digitalWrite(green1, LOW);
  delay(tempLamp1);
  digitalWrite(green1, HIGH);
  delay(tempLamp1);
  digitalWrite(green1, LOW);
  delay(tempLamp1);
  digitalWrite(green1, HIGH);
  delay(tempLamp1);
  digitalWrite(green1, LOW);
  delay(tempLamp1);
}
void lampeggia2()
{
  digitalWrite(green2, HIGH);
  delay(tempLamp2);
  digitalWrite(green2, LOW);
  delay(tempLamp2);
  digitalWrite(green2, HIGH);
  delay(tempLamp2);
  digitalWrite(green2, LOW);
  delay(tempLamp2);
  digitalWrite(green2, HIGH);
  delay(tempLamp2);
  digitalWrite(green2, LOW);
  delay(tempLamp2);
  digitalWrite(green2, HIGH);
  delay(tempLamp2);
  digitalWrite(green2, LOW);
  delay(tempLamp2);
}

numeroLampeggi();

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red1, HIGH);
digitalWrite(green2, HIGH);
delay(temp1);
digitalWrite(yellow1, HIGH);
lampeggia2();
digitalWrite(yellow1, HIGH);
digitalWrite(yellow2, HIGH);
digitalWrite(red1, LOW);
delay(temp2);
digitalWrite(green1, HIGH);
digitalWrite(yellow1, LOW);
digitalWrite(red2, HIGH);
digitalWrite(yellow2, LOW);
delay(temp1);
digitalWrite(yellow2, HIGH);
lampeggia1();
digitalWrite(red2, LOW);
digitalWrite(yellow2, HIGH);
digitalWrite(yellow1, HIGH);
delay(temp2);
digitalWrite(green2, HIGH);
digitalWrite(red1, HIGH);
digitalWrite(yellow1, LOW);
digitalWrite(yellow2, LOW);
delay(temp1);


}

void numeroLampeggi()
{
  Serial.println ("QUANTI LAMPEGGI VUOI FARE?")
  while Serial.available() == 0{}
  numLampeggi = Serial.readString().toInt()
}

void durataRosso()
{
  Serial.println ("QUANTO VUOI FAR DURARE IL ROSSO?")
  while Serial.available() == 0{}
  durRosso = Serial.readString().toInt()
}

void durataGiallo()
{
  Serial.println ("QUANTO VUOI FAR DURARE IL GIALLO?")
  while Serial.available() == 0{}
  durGiallo = Serial.readString().toInt()
}

void tempoLampeggi()
{
  Serial.println ("QUANTO DEVE DURARE UN LAMPEGGIO?")
  while Serial.available() == 0{}
  durLampeggi = Serial.readString().toInt()
}

