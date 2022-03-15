
//Madison Sawvel

#include "Account.h"
#include <fstream>


void Account::openAccount(double x, string filename) {
	balance = x;
	log = filename;
	ofstream fileName;
	fileName.open(log);
	fileName << "------------------" << endl;
	fileName << "Account opened with balance: $" << x << endl;
	fileName << "------------------" << endl;
	fileName.close();
}

	double Account::getBalance() const {
	return balance;
}

void Account::deposit(double x) {
	balance = balance + x;
	ofstream fileName;
	fileName.open(log, ofstream::app);
	fileName << "------------------" << endl;
	fileName << "Deposit: $" << x << endl;
	fileName << "Current Balance: $" << balance << endl;
	fileName << "------------------" << endl;
	fileName.close();
}

void Account::withdraw(double x) {
	balance = balance - x;
	ofstream fileName;
	fileName.open(log, ofstream::app);
	fileName << "------------------" << endl;
	fileName << "Withdraw: $" << x << endl;
	fileName << "Current Balance: $" << balance << endl;
	fileName << "------------------" << endl;
	fileName.close();
}