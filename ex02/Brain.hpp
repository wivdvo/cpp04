#pragma once

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain& other);
		Brain& operator=(const Brain& othre);
		~Brain();

		std::string ideas[100];
};