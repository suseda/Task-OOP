#include "Tyre.h"

Tyre::Tyre() : width(155), profile(30), diameter(13)
{
}

Tyre::Tyre(unsigned width, unsigned profile, unsigned diameter)
{
    //Is here right?
    setWidth(width);
    setProfile(profile);
    setDiameter(diameter);
}

unsigned Tyre::getWidth() const
{
    return width;
}

unsigned Tyre::getProfile() const
{
    return profile;
}

unsigned Tyre::getDiameter() const
{
    return diameter;
}

void Tyre::setWidth(unsigned newWidth)
{
    if (newWidth < 155 || newWidth > 365)
        throw std::invalid_argument("Tyre width must be between 155 and 365 mm");
    width = newWidth;
}

void Tyre::setProfile(unsigned newProfile)
{
    if (newProfile < 30 || newProfile > 80)
        throw std::invalid_argument("Tyre profiel must be between 30 and 80");
    profile = newProfile;
}

void Tyre::setDiameter(unsigned newDiameter)
{
    if(newDiameter < 13 || newDiameter > 21)
        throw std::invalid_argument("Tyre diameter must be between 13 and 21 inches");
    diameter = newDiameter;
}

std::ostream& operator<<(std::ostream& os, const Tyre& tyre)
{
    return os << tyre.id << " by " << tyre.manufacture << " - " << tyre.description << " – " << tyre.width << "/" << tyre.profile << "R" << tyre.diameter << std::endl;
}
