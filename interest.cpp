#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
double balance = 200.75;
double interestProcent;
double interest = 0;
int timeperiod=1;


void interestRate() {
	if (balance < 0) {
		interestProcent = 0.03213;
	}
	
	if (balance >= 0 && balance < 1000) {
		interestProcent = 0.005;
	}
	if (balance >= 1000 && balance < 5000) {
		interestProcent = 0.01621;
	}
	if (balance >= 5000) {
		interestProcent = 0.02475;
	}
	
	cout << "Since your balance is: " << balance<< "$" << endl << "Your interest rate is: " << interestProcent << endl << endl;
}



void yearlyInterest() {
	interest = interestProcent * balance * timeperiod;
}

void annualBalanceUpdate() {
	balance = balance + interest;
	cout << "Annual balance updated: " << balance<<endl<<endl;
}

void yearsUntilDesiredBalance() {
	double desiredBalance=214.88;
	int dollarsNeeded=desiredBalance-balance;
	while (dollarsNeeded != 0) {
		dollarsNeeded - interest;//fortsæt her
	}
	cout << dollarsNeeded;



}

int main() {
	interestRate();
	yearlyInterest();
	annualBalanceUpdate();
	yearsUntilDesiredBalance();
	cout << endl << endl << endl;
	return 0;
}