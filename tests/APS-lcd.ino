#include <LiquidCrystal.h>
#include "src/LCDController.h";
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
LCDController clcd(&lcd);
void setup(){
	// TESTE DE LCD
  clcd.setup(); // chamar setup
}
void loop(){
    clcd.print("looser", clcd.setCursor(0,1)); //deve escrever na segunda linha
	delay(2000);
	clcd.print("looser",clcd.setCursor(0,1), true); // deve escrever apenas na segunda linha
	delay(2000);
}
