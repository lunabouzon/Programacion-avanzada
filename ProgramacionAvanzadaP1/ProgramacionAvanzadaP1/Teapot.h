#pragma once
#include <GL/glut.h>
#include "Vector3D.h"
#include "Color.h"


class Teapot
{

private:

	Vector3D coordenates;
	Color colors;
	Vector3D orientation;
	float size;

public:

	Teapot() : coordenates(), colors(), size(0.4) {};

	inline float GetCoordinateX() const {
		return this->coordenates.GetCoordinateX();
	}

	inline float GetCoordinateY() const {
		return this->coordenates.GetCoordinateY();
	}

	inline float GetCoordinateZ() const {
		return this->coordenates.GetCoordinateZ();
	}

	inline float GetRedComponent() const { 
		return this -> colors.GetRedComponent(); 
	}

	inline float GetGreenComponent() const {
		return this->colors.GetGreenComponent();
	}

	inline float GetBlueComponent() const { 
		return this->colors.GetBlueComponent(); 
	}

	inline float GetSize() const {
		return this->size; 
	}

	inline void SetCoordinateX(const float& coordinateXToSet) {
		this->coordenates.SetCoordinateX(coordinateXToSet);
	}

	inline void SetCoordinateY(const float& coordinateYToSet) {
		this->coordenates.SetCoordinateY(coordinateYToSet);
	}

	inline void SetCoordinateZ(const float& coordinateZToSet) {
		this->coordenates.SetCoordinateZ(coordinateZToSet);
	}

	inline void SetRedComponent(const float& redComponentToSet) { 
		this -> colors.SetRedComponent(redComponentToSet);
	}

	inline void SetGreenComponent(const float& greenComponentToSet) { 
		this -> colors.SetGreenComponent(greenComponentToSet);
	}

	inline void SetBlueComponent(const float& blueComponentToSet) {
		this -> colors.SetBlueComponent(blueComponentToSet);
	}

	inline void SetSize(const float& sizeToSet) { 
		this -> size = sizeToSet; 
	}

	void Render();
};

