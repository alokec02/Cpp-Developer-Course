#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

Animal::Animal(string name, double weight)
{
	this->name = name;
	this->weight = weight;
}
string Animal::getname() const
{
	return name;
}
void Animal::setName(string name) 
{
	this->name = name;
}
double Animal::getWeight() const
{
	return weight;
}
void Animal::setWeight(double weight) 
{
	this->weight = weight;
}

string Animal::makeNoise() const
{
	return "unkown";
}