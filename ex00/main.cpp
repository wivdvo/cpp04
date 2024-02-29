#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* k = new WrongCat();
std::cout << "hello" << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << "aaa" << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << "hello1" << std::endl;
std::cout << k->getType() << " " << std::endl;
std::cout << "hello11" << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
k->makeSound();
meta->makeSound();

delete meta;
delete i;
delete j;
delete k;

return 0;
}