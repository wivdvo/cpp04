#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const std::string& type) : type(type)
{
	std::cout << "Animal name constructor" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor" << std::endl;
	this->type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal assignment overlaod" << std::endl;
	this->type = other.type;

	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}