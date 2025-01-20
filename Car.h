#pragma once
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

using namespace std;
class Car
{
private:
	string name;
	int year;
	double eng_vol;
	int price;
public:
	Car() noexcept : Car(string(), 0, 0, 0) {}
	Car(string name_S, int year_S, double vol_S, int price_S) noexcept : name{ name_S }, year{ year_S }, eng_vol{ vol_S }, price{ price_S } {}

	string get_name() const noexcept { return name; }
	int get_year() const noexcept { return year; }
	double get_vol() const noexcept { return eng_vol; }
	int get_price() const noexcept { return price; }
	void set_name(string name_S) noexcept { name = name_S; }
	void set_year(int year_S) noexcept { year = year_S; }
	void set_vol(double vol_S) noexcept { eng_vol = vol_S; }
	int set_price(int price_S) noexcept { price = price_S; }

	friend ostream& operator<<(ostream& my_cout, const Car& car);
};