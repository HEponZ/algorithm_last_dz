#include "Car.h"
ostream& operator<<(ostream& my_cout, const Car& car)
{
	my_cout << "����� - " << car.name << "\n";
	my_cout << "��� - " << car.year << "\n";
	my_cout << "����� ��������� - " << car.eng_vol << "l\n";
	my_cout << "���� - " << car.price << "$\n";

	return my_cout;
}