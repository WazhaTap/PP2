#ifndef CarInvent_H
#define CarInvent_H
#include <string>
#include <vector>
using namespace std;

class Car {
public:
	Car();
	Car(string name, string condition, int price, string date);
	void SetName(string name);
	void SetCondition(string condition);
	void SetPrice(string price);
	void SetDate(string date);
	string GetName() const;
	string GetCondition() const;
	string GetPrice()const;
	string GetDate() const;


private:
	string carName;
	string carCondition;
	string carPrice;
	string saleDate;

};
