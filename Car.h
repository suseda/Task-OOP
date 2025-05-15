#pragma once
#include "FuelTank.h"
#include "Tyre.h"
#include "Acumulator.h"
#include "Engine.h"

const unsigned TYRES_COUNT = 4;

class Car
{
public:
	Car(Engine e, Tyre tyres[TYRES_COUNT], Acumulator a, unsigned fuelCapacity, unsigned kilometers, unsigned weight);

	Car(const Car& other) = delete;// Ne znam kak da se realizira
	Car& operator=(const Car& other) = delete; // Ne znam kak da se realizira

	FuelTank getFuelTank() const;

	void drive(unsigned km);

private:
	Engine engine;
	Tyre tyres[TYRES_COUNT];
	Acumulator acumulator;
	FuelTank fuelTank;

	unsigned kilometers;
	unsigned weight;
};
