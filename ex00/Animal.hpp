#pragma once

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(const std::string& type);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		~Animal();

		virtual void makeSound(void) = 0;

	protected:
		std::string type;
};