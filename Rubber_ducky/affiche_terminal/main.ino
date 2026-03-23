// Doit être AVANT tout autre include
#define HID_CUSTOM_LAYOUT
#define LAYOUT_FRENCH

#include <HID-Project.h>

void setup() {
  delay(5000);
  BootKeyboard.begin();
  delay(500);

  // Win + X
  BootKeyboard.press(KEY_LEFT_GUI);
  delay(200);
  BootKeyboard.press('x');
  delay(200);
  BootKeyboard.releaseAll();
  delay(1000);

  // Ouvrir Terminal
  BootKeyboard.press('i');
  delay(50);
  BootKeyboard.release('i');
  delay(1500);

  // Taper dans le terminal
  BootKeyboard.print("ipconfig");
  BootKeyboard.write(KEY_RETURN);

  BootKeyboard.end();
}

void loop() {}