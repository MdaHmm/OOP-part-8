#include <iostream>

class Digit
{
private:
	int _data;
public:
	int operator +(Digit& digit)
	{
		return _data + digit._data;
	}

	int operator *(Digit& digit)
	{
		return _data * digit._data;
	}

	int operator -(Digit& digit)
	{
		return _data + digit._data;
	}
	int operator <(Digit& digit)
	{
		return _data < digit._data ? _data : digit._data;
	}

	int operator >(Digit& digit)
	{
		return _data > digit._data ? _data : digit._data;
	}

	bool operator =(Digit& digit)
	{
		return _data == digit._data ? 1 : 0;
	}
};