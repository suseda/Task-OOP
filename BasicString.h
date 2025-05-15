#pragma once
#include <iostream>

class BasicString
{
public:
	BasicString(const char* str =  "");

	BasicString(const BasicString& other);
	BasicString& operator=(const BasicString& other);
	void swap(BasicString& other);
	~BasicString();

	size_t getLength() const;
	const char* getCString() const;

	friend std::ostream& operator<<(std::ostream& os, const BasicString& str);

private:
	size_t len;
	char* data;
};