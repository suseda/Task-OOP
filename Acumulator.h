#pragma once
#include "CarPart.h"

class Acumulator : public CarPart
{
public:
	Acumulator(unsigned capacity, const char* batteryId);

	Acumulator(const Acumulator& other);
	Acumulator& operator=(const Acumulator& other);

	void swap(Acumulator& other);
	~Acumulator();

	const BasicString& getBatteryId() const;
	unsigned getCapacity() const;

	friend std::ostream& operator<<(std::ostream& os, const Acumulator& acumulator);

private:
	unsigned capacity;
	BasicString batteryId;
};