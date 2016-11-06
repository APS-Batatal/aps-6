// #include <FPS_GT511C1R.h>
class Fingerprint {
	// VARIAVEIS
	FPS_GT511C1R* fps;
	public: Fingerprint(FPS_GT511C1R* fps) {
		this->fps = fps;
	}

	// METODOS
	public:
		setup() {
			fps->Open();
		}
		SetLED(bool on = false) {
			fps->SetLED(on);
		}
		Register() {
			int id = this->getCount();
			if(id < 20) {
				fps->EnrollStart(id);				
			}
		}

		// GETTERS AND SETTERS
		getCount() {
			return fps->GetEnrollCount();
		}
};
