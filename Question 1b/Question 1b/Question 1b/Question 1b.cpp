// Question 1b.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int amount = 0, sum = 0;
	char choice1,choice2,choice3,choice4,choice5 = 'Y';
	double pound = 0.0;

	while (choice5 == 'Y')
	{
		cout << "\n\n\tPlease select the currency that you would like to exchange: ";
		cout << "\n\n\tPress 1 for Euro";
		cout << "\n\n\tPress 2 for US Dollar";
		cout << "\n\n\tPress 3 for Yen";
		cout << "\n\n\tPress 4 for Canadian Dollar";
		cout << "\n\n\tPress 5 for Australian Dollar";

		cout << "\n\n\tPlease select the currency that you wish to convert: " << endl;
		cin >> choice1;

		if (choice1 == '1')
		{
			cout << "\n\n\tPlease enter the amount you wish to convert :" << pound;
			cin >> pound;
			sum = (double)pound * 1.16;
			cout << "\n\n\tYour money in Euro is:E" << fixed << setprecision(2) << sum;
			
		}
	}




	
	_getch();
    return 0;
}

