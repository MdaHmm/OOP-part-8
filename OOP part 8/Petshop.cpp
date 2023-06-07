#include "Petshop.h"
#include <iostream>

void Petshop::AddAnimal()
{
	std::string name;
	std::string sex;
	float price;
	int amount;

	std::cout << "Enter sex -> " << '\n';
	std::getline(std::cin, sex);

	std::cout << "Enter name -> " << '\n';
	std::getline(std::cin, name);

	std::cout << "Enter price -> " << '\n';
	std::cin >> price;

	std::cout << "Enter price -> " << '\n';
	std::cin >> amount;

	Animal* animal = new Animal(name, sex, price, amount);

	_animals.push_back(animal);
}

void Petshop::AddAnimal(Animal* animal)
{
	_animals.push_back(animal);
}

void  Petshop::DeleteAnimal(std::string name)
{
	int index = 0;

	for (const auto& it : _animals)
	{
		if (it->GetName() == name)
		{
			_animals.erase(_animals.begin() + index);
			delete(it);
			return;
		}
		index++;
	}
}

void Petshop::ChangeAnimal(Animal* animal)
{
	std::string name;
	std::string sex;
	float price;
	int amount;

	system("cls");

	std::cout << "What do you want to change:\n";
	std::cout << "1 - Sex.\n";
	std::cout << "2 - Name.\n";
	std::cout << "3 - Price.\n";
	std::cout << "4 - Amount.\n\n";

	int input;

	std::cin >> input;

	system("cls");

	switch (input)
	{
	case 1:
		std::cout << "Enter a new sex value ->\n";
		std::getline(std::cin, sex);
		animal->SetSex(sex);
	case 2:
		std::cout << "Enter a new name value ->\n";
		std::getline(std::cin, name);
		animal->SetName(name);
		break;
	case 3:
		std::cout << "Enter a new price value ->\n";
		std::cin >> price;
		animal->SetPrice(price);
		break;
	case 4:
		std::cout << "Enter a new amount value ->\n";
		std::cin >> amount;
		animal->SetAmount(amount);
		break;
	default:
		break;
	}
}


