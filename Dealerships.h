#pragma once
#include "Car.h"

class Find_for_name
{
private:
	string find_name;
public:
	Find_for_name(string name) : find_name(name) {}
	bool operator()( Car& car) const 
	{
		return car.get_name() == find_name;
	}
};
class Find_for_price
{
private:
	int find_price;
public:
	Find_for_price(int price) : find_price(price) {}
	bool operator()(Car& car) const
	{
		return car.get_price() == find_price;
	}
};
class Sort_for_name
{
public:
	bool operator()(const Car& x, const Car& y) { return x.get_name() < y.get_name(); }
};
class Sort_for_price
{
public:
	bool operator()(const Car& x, const Car& y) { return x.get_price() < y.get_price(); }
};

class Dealerships
{
private:
	vector<Car> cars;
public:
	void Add(string name_S, int year_S, double vol_S, int price_S) noexcept;
	void Del(string del_name);
	void print()const;

	void find_with_name(string find_name);
	void find_with_price(int find_price);

	void sort_with_name();
	void sort_with_price();
};