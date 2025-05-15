#pragma once
#include "BasicString.h"

class CarPart
{
public:
	CarPart();
	CarPart(char* manufacture, char* description);

	CarPart(const CarPart& other);
	CarPart& operator=(const CarPart& other);

	void swap(CarPart& other);
	~CarPart();

	const BasicString& getManufacture() const;
	const BasicString& getDescription() const;
	unsigned getId() const;

	friend std::ostream& operator<<(std::ostream& os, const CarPart& carPart);

protected:
	BasicString manufacture;
	BasicString description;
	static unsigned idCounter;
	const unsigned id;
};
