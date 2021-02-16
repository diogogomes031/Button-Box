#include <Keyboard.h>

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(2) == LOW) {
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_SHIFT);
      Keyboard.press('m');
      delay(100);
      Keyboard.release(KEY_LEFT_CTRL);
      Keyboard.release(KEY_LEFT_SHIFT);
      Keyboard.release('m');  
      delay(100);
  }
    if (digitalRead(3) == LOW) {
       Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_SHIFT);
      Keyboard.press('e');
      delay(100);
      Keyboard.release(KEY_LEFT_CTRL);
      Keyboard.release(KEY_LEFT_SHIFT);
      Keyboard.release('e');  
      delay(100);
  }
    if (digitalRead(4) == LOW) {
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('j'); 
      delay(100);
      Keyboard.release(KEY_LEFT_CTRL);
      Keyboard.release('j');
      delay(100);
  }
    if (digitalRead(5) == LOW) {
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('i'); 
      delay(100);
      Keyboard.release(KEY_LEFT_CTRL);
      Keyboard.release('i');
      delay(100); 
  }
    if (digitalRead(6) == LOW) {
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('n'); 
      delay(100);
      Keyboard.release(KEY_LEFT_CTRL);
      Keyboard.release('n');
      delay(100);
  }
    if (digitalRead(7) == LOW) {
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_RETURN); 
      delay(100);
      Keyboard.release(KEY_LEFT_CTRL);
      Keyboard.release(KEY_RETURN);
      delay(100);
  }
    if (digitalRead(8) == LOW) {
      Keyboard.press(KEY_LEFT_ARROW);  
      delay(100);
      Keyboard.release(KEY_LEFT_ARROW);  
      delay(100);
  }
    if (digitalRead(9) == LOW){
      Keyboard.press(KEY_RIGHT_ARROW);  
      delay(100);
      Keyboard.release(KEY_RIGHT_ARROW);  
      delay(100);
  }
}
