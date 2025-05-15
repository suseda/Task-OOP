#pragma once
#include "CarPart.h"

class Tyre : public CarPart
{
public:
	Tyre();
	Tyre(unsigned width, unsigned profile, unsigned diameter);

	Tyre(const Tyre& other) = default;
	Tyre& operator=(const Tyre& other) = default; // is it okay when i have no dynamic data 
	~Tyre() = default;

	unsigned getWidth() const;
	unsigned getProfile() const;
	unsigned getDiameter() const;

	void setWidth(unsigned newWidth);
	void setProfile(unsigned newProfile);
	void setDiameter(unsigned newDiameter);

	friend std::ostream& operator<<(std::ostream& os, const Tyre& tyre);

private:
	unsigned width;
	unsigned profile;
	unsigned diameter;
};
