#pragma once
#include "CarPart.h"

class Engine : public CarPart
{
public:
	Engine(unsigned horsePowers);

	Engine(const Engine& other) = default;
	Engine& operator=(const Engine& other) = default;
	~Engine() = default;

	unsigned getHorsePowers() const;
	void setHorsePowers(unsigned newHorsePowers);

	friend std::ostream& operator<<(std::ostream& os, const Engine& engine);
private:
	unsigned horsePowers;
};
