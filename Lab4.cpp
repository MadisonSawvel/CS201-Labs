
//Madison Sawvel

#include "Account.h"
#include <string>


int main() {
	Account a;
	a.openAccount(26.0, "bankSlip.txt");
	a.deposit(42.0);
	a.withdraw(10.0);
	a.withdraw(25.0);
	a.deposit(400.0);
	a.deposit(120.0);
	a.withdraw(275.0);

	system ("pause");
	return 0;
}