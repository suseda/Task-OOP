#include "CarPart.h"

unsigned CarPart::idCounter = 0;

CarPart::CarPart() : manufacture(""), description(""), id(idCounter)
{
    idCounter++;
}

CarPart::CarPart(char* manufacture, char* description) 
    : manufacture(manufacture), description(description), id(idCounter++)
{
    
}

CarPart::CarPart(const CarPart& other) : id(other.id) // if something happen this is not strong exception?
{
    BasicString copy1(other.manufacture);
    BasicString copy2(other.description);

    manufacture.BasicString::swap(copy1);
    description.BasicString::swap(copy2);
    //id = other.id; // error: expression must be modified value
}

CarPart& CarPart::operator=(const CarPart& other)
{
    if (this != &other)
    {
        CarPart copy(other);
        swap(copy);
    }

    return *this;
}

void CarPart::swap(CarPart& other)
{
    manufacture = other.manufacture;
    description = other.description;
}

CarPart::~CarPart()
{
}


const BasicString& CarPart::getManufacture() const
{
    return manufacture;
}

const BasicString& CarPart::getDescription() const
{
    return description;
}

unsigned CarPart::getId() const
{
    return id;
}

std::ostream& operator<<(std::ostream& os, const CarPart& carPart)
{
    return os << carPart.id << " by " << carPart.manufacture << " - " << carPart.description << " – ";
}
