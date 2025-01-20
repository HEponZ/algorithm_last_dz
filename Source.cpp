#include "Dealerships.h"

int main()
{
	setlocale(LC_ALL, "rus");
	Dealerships dealership;
	string name;
	int year, price, choise;
	double vol;

	enum MENU {
		EXIT = 0,
		ADD,
		DEL,
		PRINT,
		FIND_NAME,
		FIND_PRICE,
		SORT_NAME,
		SORT_PRICE
	};

	cout << "1 - ��������\n2 - �������\n3 - ����� ���� �����\n4 - ����� �� �����\n5 - ����� �� ����\n6 - ������������� �� ������\n7 - ������������� �� ����\n";

	do
	{
		try
		{
			cin >> choise;
			switch (choise)
			{
			case ADD:
				cout << "������� �����: ";
				cin >> name;
				cout << "������� ���: ";
				cin >> year;
				cout << "������� ����� ���������: ";
				cin >> vol;
				cout << "������� ����: ";
				cin >> price;
				dealership.Add(name, year, vol, price);
				break;
			case DEL:
				cout << "������� �����: ";
				cin >> name;
				dealership.Del(name);
				break;
			case PRINT:
				dealership.print();
				break;
			case FIND_NAME:
				cout << "������� �����: ";
				cin >> name;
				dealership.find_with_name(name);
				break;
			case FIND_PRICE:
				cout << "������� ����: ";
				cin >> price;
				dealership.find_with_price(price);
				break;
			case SORT_NAME:
				dealership.sort_with_name();
				cout << "������������� �� ������\n";
				break;
			case SORT_PRICE:
				dealership.sort_with_price();
				cout << "������������� �� ����\n";
				break;
			case EXIT:
				cout << "\n\n��� ��� ����� ���������� � �������������� ����\n������� ��� �� ��������\n��� ���� ��� �� � ���� ���������(\n\n";
			}
		}
		catch (const out_of_range& exc)
		{
			cout << exc.what();
		}
		catch (const logic_error& exc)
		{
			cout << exc.what();
		}
	} while (choise != 0);

	return 0;
}