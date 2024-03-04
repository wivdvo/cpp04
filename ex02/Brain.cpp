#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain def constructor" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor" << std::endl;

	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assignent overload" << std::endl;

	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}

	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

