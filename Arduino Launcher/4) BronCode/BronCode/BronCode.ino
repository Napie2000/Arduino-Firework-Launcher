#include <IRremote.h>

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;
const int Relay = 10;
const int RedPin = 11;
int a = 2;  //For displaying segment "a"
int b = 3;  //For displaying segment "b"
int c = 4;  //For displaying segment "c"
int d = 5;  //For displaying segment "d"
int e = 6;  //For displaying segment "e"
int f = 8;  //For displaying segment "f"
int g = 9;  //For displaying segment "g"

void setup(){
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(Relay, OUTPUT);
  pinMode(RedPin, OUTPUT);
  digitalWrite(Relay, HIGH);
  digitalWrite(RedPin, LOW);
  pinMode(a, OUTPUT);  //A
  pinMode(b, OUTPUT);  //B
  pinMode(c, OUTPUT);  //C
  pinMode(d, OUTPUT);  //D
  pinMode(e, OUTPUT);  //E
  pinMode(f, OUTPUT);  //F
  pinMode(g, OUTPUT);  //G
}

void displayDigit(int digit)
{
 //Conditions for displaying segment a
 if(digit!=1 && digit != 4)
 digitalWrite(a,HIGH);
 
 //Conditions for displaying segment b
 if(digit != 5 && digit != 6)
 digitalWrite(b,HIGH);
 
 //Conditions for displaying segment c
 if(digit !=2)
 digitalWrite(c,HIGH);
 
 //Conditions for displaying segment d
 if(digit != 1 && digit !=4 && digit !=7)
 digitalWrite(d,HIGH);
 
 //Conditions for displaying segment e 
 if(digit == 2 || digit ==6 || digit == 8 || digit==0)
 digitalWrite(e,HIGH);
 
 //Conditions for displaying segment f
 if(digit != 1 && digit !=2 && digit!=3 && digit !=7)
 digitalWrite(f,HIGH);
 if (digit!=0 && digit!=1 && digit !=7)
 digitalWrite(g,HIGH);
 
}
void turnOff()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}


void loop() {
  if (irrecv.decode(&results)){

  switch(results.value){
  for(int i=0;i<10;i++)
 {
   displayDigit(i);
   delay(1000);
   turnOff();
 }

}
  switch(results.value){
     case  0xE0E040BF: //Keypad button "power"
     digitalWrite(Relay, LOW);
     digitalWrite(RedPin, HIGH);
     delay(4000);
     digitalWrite(Relay, HIGH);
     digitalWrite(RedPin, LOW);
}
  switch(results.value){
     case 0xE0E0708F: //Keypad button "9"
  for(int i=10;i>0;i--)
 {
   displayDigit(i);
   delay(1000);
   turnOff();
 }

  if(int i=1){
      delay(1000);
     digitalWrite(Relay, LOW);
     digitalWrite(RedPin, HIGH);
     delay(4000);
     digitalWrite(Relay, HIGH);
     digitalWrite(RedPin, LOW);
}
}
  switch(results.value){
     case 0xE0E050AF: //Keypad button "6"
  for(int i=6;i>0;i--)
 {
   displayDigit(i);
   delay(1000);
   turnOff();
 }

  if(int i=1){
      delay(1000);
     digitalWrite(Relay, LOW);
     digitalWrite(RedPin, HIGH);
     delay(4000);
     digitalWrite(Relay, HIGH);
     digitalWrite(RedPin, LOW);
}
}
  switch(results.value){
     case 0xE0E0609F: //Keypad button "3"
  for(int i=3;i>0;i--)
 {
   displayDigit(i);
   delay(1000);
   turnOff();
 }

  if(int i=1){
      delay(1000);
     digitalWrite(Relay, LOW);
     digitalWrite(RedPin, HIGH);
     delay(4000);
     digitalWrite(Relay, HIGH);
     digitalWrite(RedPin, LOW);
       }
     }
irrecv.resume();
   }
}
