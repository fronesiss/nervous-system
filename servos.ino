#include <Servo.h>

byte pinB1 = 2;
byte pinB2 = 4;

byte led1 = 9;
byte led2 = 10;

bool estadoB1;
bool estadoB2;

Servo servo1;
Servo servo2;


void setup()
{
  // Inicializar botones
  pinMode(pinB1, INPUT);  
  pinMode(pinB2, INPUT);
  
  // Inicializar LEDS
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);

  // Inicializar servos
  servo1.attach(5);
  servo2.attach(6);
}



void loop()
{
  estadoB1 = digitalRead(pinB1);
  estadoB2 = digitalRead(pinB2);

    
  if(estadoB1 == 1)
  { 
    servo1.write(90);
  }
  
  else 
  { 
    servo1.write(0); 

  }
  
  
  if(estadoB2 == 1)
  {
    servo2.write(90);

  }
   else
  {
    servo2.write(0); 
  }
  
 
}
