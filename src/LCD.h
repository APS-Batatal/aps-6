#include <LiquidCrystal.h>
class LCDController {
	// VARIAVEIS
	LiquidCrystal* lcd; // Variável do LCD
	int cursor[2] = {0,0}; // Cursor do lcd

	// CONSTRUTOR
	public: LCDController(LiquidCrystal* lcd) {
		this->lcd = lcd;
	}

	// METODOS
	public:
		// setup
		setup() {
			// linmpar a tela e resetar o cursor
			lcd->clear();
			lcd->setCursor(this->cursor[0], this->cursor[1]);
		}
		// Print (char *msg)
		print(char *msg) {
			// (limpar e printar mensagem na tela)
			lcd->clear();
			this->print(msg, this->setCursor(0, 0), true);
		}
		// Print (char *msg, int *cursor)
		print(char *msg, int *cursor, bool clear = false) {
			// (printar mensagem definindo o cursor e se a tela deve ser limpa)
			if(clear) lcd->clear();
			this->setCursor(cursor[0], cursor[1]);
			lcd->print(msg);
		}

		// GETTERS AND SETTERS

		int* getCursor(){
			return this->cursor;
		}

		int* setCursor(int x, int y) {
			this->cursor[0] = x;
			this->cursor[1] = y;
			lcd->setCursor(this->cursor[0], this->cursor[1]);
			return this->cursor;
		}
};
