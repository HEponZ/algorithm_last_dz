#include "Car.h"
ostream& operator<<(ostream& my_cout, const Car& car)
{
	my_cout << "Марка - " << car.name << "\n";
	my_cout << "Год - " << car.year << "\n";
	my_cout << "Обьем двигателя - " << car.eng_vol << "l\n";
	my_cout << "Цена - " << car.price << "$\n";

	return my_cout;
}