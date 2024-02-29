#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type)
{
	std::cout << "WrongAnimal name constructor" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	this->type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal assignment overlaod" << std::endl;
	this->type = other.type;

	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "*Wronganimal sound*" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return type;
}