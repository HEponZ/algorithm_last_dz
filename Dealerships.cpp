#include "Dealerships.h"

void Dealerships::Add(string name_S, int year_S, double vol_S, int price_S) noexcept
{
	cars.emplace_back(name_S, year_S, vol_S, price_S);
}

void Dealerships::Del(string del_name)
{
	if (cars.empty())
	{
		throw out_of_range("Автосалон пуст. Загляните позже\n");
	}

	auto iter = remove_if(cars.begin(), cars.end(), Find_for_name(del_name));

	if (iter == cars.end())
	{
		throw logic_error("Упс, кажется такого авто тут нет\n");
	}
	cars.erase(iter, cars.end());
}

void Dealerships::print() const
{
	if (cars.empty())
	{
		throw out_of_range("Автосалон пуст. Загляните позже\n");
	}

	for (auto car : cars)
	{
		cout << car << "\n";
	}
}

void Dealerships::find_with_name(string find_name)
{
	if (cars.empty())
	{
		throw out_of_range("Автосалон пуст. Загляните позже\n");
	}

	auto iter = find_if(cars.begin(), cars.end(), Find_for_name(find_name));

	if (iter != cars.end())
	{
		cout << *iter;
	}
	else
	{
		throw logic_error("Упс, кажется такого авто тут нет\n");
	}
}
void Dealerships::find_with_price(int find_price)
{
	if (cars.empty())
	{
		throw out_of_range("Автосалон пуст. Загляните позже\n");
	}

	auto iter = find_if(cars.begin(), cars.end(), Find_for_price(find_price));

	if (iter != cars.end())
	{
		cout << *iter;
	}
	else
	{
		throw logic_error("Упс, кажется такого авто тут нет\n");
	}
}

void Dealerships::sort_with_name()
{
	if (cars.empty())
	{
		throw out_of_range("Автосалон пуст. Загляните позже\n");
	}

	sort(cars.begin(), cars.end(), Sort_for_name());
}
void Dealerships::sort_with_price()
{
	if (cars.empty())
	{
		throw out_of_range("Автосалон пуст. Загляните позже\n");
	}
	sort(cars.begin(), cars.end(), Sort_for_price());
}