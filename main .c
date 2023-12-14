int LED_Green = 3;
int LED_Blue = 2;

void setup()
{
  pinMode(LED_Blue, OUTPUT); 
  pinMode(LED_Green, OUTPUT); 
  pinMode(4, INPUT);
bool buttonPressed = digitalRead(4);
  digitalWrite(LED_Blue, LOW);
  while (buttonPressed == 1); {
   digitalWrite(LED_Green, HIGH);
   delay(100);
   digitalWrite(LED_Green, LOW);
  }
}
      	
        
void loop()
{
  digitalWrite(LED_Blue, HIGH);
}