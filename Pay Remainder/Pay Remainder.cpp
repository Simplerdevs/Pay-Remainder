						/* Program to read a TotalBill and cashPaid and calculate the remainder to be paid back */

#include <iostream>
#include <cmath>
using namespace std;


int main()

{
	float Total_Bill, Cash_Paid;
	cout << "Please enter TotalBill !" << endl;
	cin >> Total_Bill;

	cout << "Please enter CashPaid !" << endl;
	cin >> Cash_Paid;


	float Remainder = Cash_Paid - Total_Bill;
	cout << "remainder is " << Remainder << endl;

	return 0;


	// Created by @ilyes_Trabelsi
}

