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

	cout << "1 - Добавить\n2 - Удалить\n3 - Вывод всех машин\n4 - Поиск по марке\n5 - Поиск по цене\n6 - Отсортировать по маркам\n7 - Отсортировать по цене\n";

	do
	{
		try
		{
			cin >> choise;
			switch (choise)
			{
			case ADD:
				cout << "Введите марку: ";
				cin >> name;
				cout << "Введите год: ";
				cin >> year;
				cout << "Введите обьем двигателя: ";
				cin >> vol;
				cout << "Введите цену: ";
				cin >> price;
				dealership.Add(name, year, vol, price);
				break;
			case DEL:
				cout << "Введите марку: ";
				cin >> name;
				dealership.Del(name);
				break;
			case PRINT:
				dealership.print();
				break;
			case FIND_NAME:
				cout << "Введите марку: ";
				cin >> name;
				dealership.find_with_name(name);
				break;
			case FIND_PRICE:
				cout << "Введите цену: ";
				cin >> price;
				dealership.find_with_price(price);
				break;
			case SORT_NAME:
				dealership.sort_with_name();
				cout << "Отсортировано по маркам\n";
				break;
			case SORT_PRICE:
				dealership.sort_with_price();
				cout << "Отсортировано по цене\n";
				break;
			case EXIT:
				cout << "\n\nЭто был очень интересный и запоминающийся блок\nСпасибо вам за обучение\nКак жаль что мы с вами прощаемся(\n\n";
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