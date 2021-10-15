#pragma once
class Color
{
private:

	float redComponent;
	float greenComponent;
	float blueComponent;

public: 
	
	Color() : redComponent(0.0), greenComponent(0.0), blueComponent(0.0){};

	inline float GetRedComponent() const {
		return this->redComponent;
	}

	inline float GetGreenComponent() const {
		return this->greenComponent;
	}

	inline float GetBlueComponent() const {
		return this->blueComponent;
	}

	inline void SetRedComponent(const float& redComponentToSet) {
		if (redComponent < 0.0 | redComponent > 1.0) { redComponent = 0.0; }
		this->redComponent = redComponentToSet;
	}

	inline void SetGreenComponent(const float& greenComponentToSet) {
		if (greenComponent < 0.0 | greenComponent > 1.0) { greenComponent = 0.0; }
		this->greenComponent = greenComponentToSet;
	}

	inline void SetBlueComponent(const float& blueComponentToSet) {
		if (blueComponent < 0.0 | blueComponent > 1.0) { blueComponent = 0.0; }
		this->blueComponent = blueComponentToSet;
	}

};

