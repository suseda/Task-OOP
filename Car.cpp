#include "Car.h"
#include <stdexcept>

Car::Car(Engine e, Tyre tyres[TYRES_COUNT], Acumulator a, unsigned fuelCapacity, unsigned kilometers, unsigned weight)
    : engine(e), acumulator(a), fuelTank(fuelCapacity), kilometers(kilometers), weight(weight)
{
    for (size_t i = 0; i < TYRES_COUNT; i++)
        this->tyres[i] = tyres[i];
}


FuelTank Car::getFuelTank() const
{
    return fuelTank;
}

void Car::drive(unsigned km)
{
    if (fuelTank.getCurrFuel() - km < 0)
        throw std::logic_error("Car dont have enough fuel");

    kilometers += km;
    fuelTank.use(km);
}
