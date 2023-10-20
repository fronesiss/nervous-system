// Motores
  byte m1=2;
  byte m2=3;
  byte m3=4;
  byte m4=5;
  
// Sensores
  //Motor 1
  byte s1 = 8;
  bool edoM1;
  //Motor 2
  byte s2 = 9;
  bool edoM2;
  //Motor 3
  byte s3 = 10;
  bool edoM3;
  //Motor 4
  byte s4 = 11;
  bool edoM4;


void setup()
{
 pinMode(m1,OUTPUT);
 pinMode(m2,OUTPUT);
 pinMode(m3,OUTPUT); 
 pinMode(m4,OUTPUT);
  
 pinMode(s1,INPUT);
 pinMode(s2,INPUT);
 pinMode(s3,INPUT);
 pinMode(s4,INPUT);
  
 Serial.begin(9600);
}

void loop()
{
 edoM1 = digitalRead(s1);
 digitalWrite(m1,edoM1);
  
 edoM2 = digitalRead(s2);
 digitalWrite(m2,edoM2);
  
 edoM3 = digitalRead(s3);
 digitalWrite(m3,edoM3);
  
 edoM4 = digitalRead(s4);
 digitalWrite(m4,edoM4);

  
 Serial.print(edoM1);
 Serial.print(edoM2);
 Serial.print(edoM3);
 Serial.print(edoM4);

}
