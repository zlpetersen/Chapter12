#include "Cow.h"

#include <string>
#include <iostream>

Cow::Cow()
{
	strcpy_s(name, "cow");
	hobby = new char[9];
	strcpy_s(hobby, 9, "Eating\0");
	weight = 1500;
}


Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy_s(name, nm);
	hobby = new char[strlen(ho) + 1];
	strcpy_s(hobby, strlen(ho) + 1, ho);
	weight = wt;
}


Cow::Cow(const Cow& c)
{
	strcpy_s(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy_s(hobby, strlen(c.hobby) + 1, c.hobby);
	weight = c.weight;
}


Cow::~Cow()
{
	delete[] hobby;
}


Cow& Cow::operator=(const Cow& c)
{
	if (this != &c)
	{
		delete[] hobby;
		char* lHobby = new char[strlen(c.hobby) + 1];
		strcpy_s(name, c.name);
		strcpy_s(lHobby, strlen(c.hobby) + 1, c.hobby);
		hobby = lHobby;
		weight = c.weight;
	}
	return *this;
}


void Cow::showCow() const
{
	std::cout << "\tName: " << name << "\tHobby: " << hobby << "\tWeight: " << weight << "\n";
}
