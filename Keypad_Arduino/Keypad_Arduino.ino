#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns

char Keys[ROWS][COLS] = 
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {2, 3, 4, 5}; //{R1, R2, R3, R4}
byte colPins[COLS] = {6, 7, 8, 9}; //{C1, C2, C3, C4}

Keypad customKeypad = Keypad(makeKeymap(Keys), rowPins, colPins, ROWS, COLS); 

void setup()
{
  Serial.begin(9600);
}
  
void loop()
{
  char customKey = customKeypad.getKey(); 
  if(customKey)
  { 
    Serial.println(customKey);
  }
}
