#include "FuelTank.h"
#include <stdexcept>

FuelTank::FuelTank(unsigned fuelCapacity) : fuelCapacity(fuelCapacity), currFuel(fuelCapacity)
{
}

void FuelTank::use(unsigned fuelToUse)
{
	if (currFuel - fuelToUse < 0)
		throw std::logic_error("Fuel to use is more than curr");
	currFuel -= fuelToUse;
}

void FuelTank::fueling(unsigned fuel)
{
	if (currFuel + fuel > fuelCapacity)
		currFuel = fuelCapacity;
	else
		currFuel += fuel;
}

unsigned FuelTank::getFuelCapacity() const
{
	return fuelCapacity;
}

unsigned FuelTank::getCurrFuel() const
{
	return currFuel;
}
