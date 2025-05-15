#include "BasicString.h"
#include <stdexcept>
#pragma warning(disable:4996)

BasicString::BasicString(const char* str)
{
    if (!str)
        throw std::invalid_argument("String cannot be nullptr");

    len = strlen(str);
    data = new char[strlen(str) + 1];
    strcpy(data, str);
}

BasicString::BasicString(const BasicString& other) : BasicString(other.data)
{
}

BasicString& BasicString::operator=(const BasicString& other)
{
    if (this != &other)
    {
        BasicString copy(other);
        swap(copy);
    }

    return *this;
}

void BasicString::swap(BasicString& other)
{
    char* oldData = data;
    data = other.data;
    other.data = oldData;

    size_t oldLen = len;
    len = other.len;
    other.len = oldLen;
}

BasicString::~BasicString()
{
    delete[] data;
}

size_t BasicString::getLength() const
{
    return len;
}

const char* BasicString::getCString() const
{
    return data;
}

std::ostream& operator<<(std::ostream& os, const BasicString& str)
{
    return os << str.getCString();
}
