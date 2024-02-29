#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const std::string& type)
{
	std::cout << "Dog name constructor" << std::endl;
	this->type = type;
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

void Dog::makeSound(void)
{
	std::cout << "bark!!" << std::endl;
}