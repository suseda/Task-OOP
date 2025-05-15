#include "Engine.h"

Engine::Engine(unsigned horsePowers) : horsePowers(horsePowers)
{
}

unsigned Engine::getHorsePowers() const
{
    return horsePowers;
}

void Engine::setHorsePowers(unsigned newHorsePowers)
{
    horsePowers = newHorsePowers;
}

std::ostream& operator<<(std::ostream& os, const Engine& engine)
{
    return os << engine.id << " by " << engine.manufacture << " - " << engine.description << " – " << engine.horsePowers << "hp" << std::endl;
}
