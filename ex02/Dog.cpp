#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
	brain = new Brain;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment overload" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor" << std::endl;
	delete brain;
}

void Dog::makeSound(void) const
{
	std::cout << "bark!!" << std::endl;
}