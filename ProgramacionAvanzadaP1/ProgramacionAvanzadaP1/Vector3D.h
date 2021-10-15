#pragma once
class Vector3D
{
private:
	float coordinateX;
	float coordinateY;
	float coordinateZ;

public:
	Vector3D() : coordinateX(0.0), coordinateY(0.0), coordinateZ(0.0) {};

	inline float GetCoordinateX() const { 
		return this->coordinateX; 
	}

	inline float GetCoordinateY() const {
		return this->coordinateY; 
	}

	inline float GetCoordinateZ() const {
		return this->coordinateZ; 
    }

	inline void SetCoordinateX(const float& coordinateXToSet) { 
		this->coordinateX = coordinateXToSet; 
	}

	inline void SetCoordinateY(const float& coordinateYToSet) { 
		this->coordinateY = coordinateYToSet; 
	}

	inline void SetCoordinateZ(const float& coordinateZToSet) {
		this->coordinateZ = coordinateZToSet; 
	}

};

