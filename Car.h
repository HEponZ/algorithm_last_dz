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
	Car() : Car(string(), 0, 0, 0) {}
	Car(string name_S, int year_S, double vol_S, int price_S) : name{ name_S }, year{ year_S }, eng_vol{ vol_S }, price{ price_S } {}

	string get_name() const { return name; }
	int get_year() { return year; }
	double get_vol() { return eng_vol; }
	int get_price() const { return price; }
	void set_name(string name_S) { name = name_S; }
	void set_year(int year_S) { year = year_S; }
	void set_vol(double vol_S) { eng_vol = vol_S; }
	int set_price(int price_S) { price = price_S; }

	friend ostream& operator<<(ostream& my_cout, const Car& car);
};