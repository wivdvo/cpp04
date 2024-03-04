#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor" << std::endl;
	this->type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment overload" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);

	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Miau!!" << std::endl;
}