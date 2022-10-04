#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "CarInvent.h"
using namespace std;

Car::Car() {
	carName = "none";
	carCondition = "none";
	carPrice = "none";
	saleDate = "none";
}
Car::Car(string name, string condition, int price, string date) {
	SetName(name);
	SetCondition(condition);
	SetDate(date);
}

void Car::SetName(string name)
{
	carName = name;
}

void  Car::SetCondition(string condition)
{
	carCondition= condition;

}
void Car::SetPrice(string price) {
	carPrice = price;
}
void Car::SetDate(string date) {
	saleDate = date;
}
string Car::GetName() const {
	return carName;
}
string Car::GetCondition() const {
	return carCondition;
}
string Car::GetPrice()const {
	return carPrice;
}
string Car::GetDate() const {
	return saleDate;
}
