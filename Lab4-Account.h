
//Madison Sawvel

#include <iostream>
#include <string>

using namespace std;

class Account {
private:
	double balance;
	string log;
public:
	void openAccount(double x, string filename);
	double getBalance() const;
	void deposit(double x);
	void withdraw(double x);
};