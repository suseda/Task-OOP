#pragma once
#include "CarPart.h"

class FuelTank : public CarPart
{
public:
	FuelTank(unsigned fuelCapacity);
	
	void use(unsigned fuelToUse);
	void fueling(unsigned fuel);

	unsigned getFuelCapacity() const;
	unsigned getCurrFuel() const;

private:
	unsigned fuelCapacity;
	unsigned currFuel;
};
