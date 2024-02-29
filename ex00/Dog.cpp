#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment overload" << std::endl;
	this->type = other.type;

	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "bark!!" << std::endl;
}