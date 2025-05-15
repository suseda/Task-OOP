#include "Acumulator.h"
 
Acumulator::Acumulator(unsigned capacity, const char* batteryId) : capacity(capacity), batteryId(batteryId)
{
}

Acumulator::Acumulator(const Acumulator& other) 
{
    // Is this logic right for strong exeption?? 
    CarPart carPartCopy(other);
    BasicString copy1(other.batteryId);

    CarPart::swap(carPartCopy);
    batteryId.BasicString::swap(copy1);

    capacity = other.capacity;
}

Acumulator& Acumulator::operator=(const Acumulator& other)
{
    if (this != &other)
    {
        Acumulator copy(other);
        swap(copy);
    }

    return *this;
}

void Acumulator::swap(Acumulator& other)
{
    batteryId = other.batteryId;

    unsigned oldCapacity = capacity;
    capacity = other.capacity;
    other.capacity = oldCapacity;
}

Acumulator::~Acumulator()
{
}

const BasicString& Acumulator::getBatteryId() const
{
    return batteryId;
}

unsigned Acumulator::getCapacity() const
{
    return capacity;
}

std::ostream& operator<<(std::ostream& os, const Acumulator& acumulator)
{
    return os << acumulator.id << " by " << acumulator.manufacture << " - " << acumulator.description << " – " << acumulator.capacity << "Ah" << std::endl;
}
