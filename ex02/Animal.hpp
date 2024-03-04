#pragma once

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
		Animal(void);
		Animal(const std::string& type);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();

		virtual void makeSound(void) const = 0;
		virtual std::string getType(void) const = 0;

	protected:
		std::string type;
};