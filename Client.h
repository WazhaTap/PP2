#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <vector>
using namespace std;

class Client {
public:
	Client();
	Client(string name, string address, string date);
	void SetName(string name);
	void SetAddress(string address);
	void SetDate(string date);
	string GetName() const;
	string GetAddress() const;
	string GetDate() const;



	void Print();
	void PrintClientInfo();
	void PrintToFile();
private:
	string clientName;
	string clientAdd;
	string saleDate;
	vector<Client> clientInfo;
};
