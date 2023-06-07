#pragma once
#include <iostream>
#include <string>


class Animal
{
private:
	std::string _name;
	std::string _sex;
	float _price;
	int _amount;

public:
	Animal(std::string name, std::string sex, float price, int amount) : _name(name), _sex(sex), _price(price), _amount(amount) {}

	std::string GetSex();
	void SetSex(std::string sex);

	std::string GetName();
	void SetName(std::string name);

	float GetPrice();
	void SetPrice(float price);

	int GetAmount();
	void SetAmount(int amount);
};

class Cat : public Animal
{
public:
	Cat(std::string name, std::string sex, float price, int amount) : Animal(name, sex, price, amount){}
};