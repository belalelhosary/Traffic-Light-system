// C++ code
//
int red =12,yellow=11,green=10;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);


}

void loop(){
  
    digitalWrite(red, HIGH);
   delay(1000);
    digitalWrite(yellow, HIGH);
 delay(1000);
      digitalWrite(yellow, LOW);
 delay(1000);
    digitalWrite(yellow, HIGH);
 delay(1000);
        digitalWrite(yellow, LOW);
 delay(1000);
    digitalWrite(yellow, HIGH);
 delay(1000);

    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
 delay(1000);
    digitalWrite(green, LOW);
 delay(1000);

 
}