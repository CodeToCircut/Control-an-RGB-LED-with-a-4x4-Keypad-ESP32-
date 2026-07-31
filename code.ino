
#include <Keypad.h>

const int redPin = 23;
const int greenPin = 22;
const int bluePin = 21;

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {13, 12, 14, 27}; 
byte colPins[COLS] = {26, 25, 33, 32}; 

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(115200);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  setRGBColor(255, 255, 255);
  delay(400);
  setRGBColor(0, 0, 0);
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    changeColorForKey(key);
  }
}

void setRGBColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void changeColorForKey(char key) {
  switch (key) {
    case '1':
      setRGBColor(255, 0, 0);
      break;
    case '2':
      setRGBColor(0, 255, 0);
      break;
    case '3':
      setRGBColor(0, 0, 255);
      break;
    case '4':
      setRGBColor(255, 255, 0);
      break;
    case 'A':
      setRGBColor(128, 0, 128);
      break;
    case 'B':
      setRGBColor(0, 255, 255);
      break;
    case 'C':
      setRGBColor(255, 165, 0);
      break;
    case 'D':
      setRGBColor(255, 255, 255);
      break;
    default:
      setRGBColor(50, 50, 50);
      break;
  }

  delay(500);
  setRGBColor(0, 0, 0);
}
