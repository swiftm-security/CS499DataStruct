/* 
CS 499 Gas Calc.cpp 
This program is used to calculate a gas bill based on gallons used
The user is prompted with two options, access the calculator or access the customer list
The user will enter their name and gallons used and the program will output a price
This information is then stored in a text file 
*/

#include <iostream>
#include<fstream>
#include<iomanip>
#include <string>
#include <cstring>
#include <cstdlib>
#include<conio.h>
using namespace std;

/*
Calculates total based on charge and standard fee
*/
double gasChargeCalc(double a, int b)
{
	double sum;
	sum = a + b;
	return sum;
}

/*
Gathers user name and gallons
Calculates charge based on gallons purchased
Outputs price of gas to user 
*/
void gasFeeCalculation()
{
	string name;
	double gallons, charge = 0, total;
	const int fee = 15;
	double costUpTo6K = 2.35,
		costUpTo20K = 3.75,
		costOver20K = 6.00;
	
	//add to text file
	ofstream fout;
	fout.open("GasCalcCustomers.txt", ios_base::app); 
	
	cout << "\n\n\n\tEnter name or business name: ";
	cin.ignore();
	getline(cin, name);
	cout << "\n\n\n\tEnter the total number of gallons used: ";
	cin >> gallons;
	gallons = gallons / 1000;


	if (gallons > 20) {
		charge = (gallons - 20) * costOver20K;
		charge = charge + (14 * costUpTo20K);
		charge = charge + (6 * costUpTo6K);
	}
	else if (gallons > 6 && gallons <= 20) {

		charge = (gallons - 6) * costUpTo20K;
		charge = charge + (6 * costUpTo6K);
	}
	else {

		charge = gallons * costUpTo6K;
	}

	//output to console
	total = gasChargeCalc(charge, fee);
	cout << "\n\n\n\tYou have used " << gallons << " thousand gallons of gas." << endl;
	cout << "\n\n\n\tYour total gas bill is $" << setprecision(2) << fixed << total;
	cout << "\n\n\n\tThank you " << name << " for your business\n";
	
	//output to text file
	fout << name <<" " << gallons * 1000 << " "<< total <<"\n";
	fout.close();
}

/*
Read text file for customer name, gallons purchased and price
*/
void readCustomer() 
{
	string line;
	ifstream myfile("GasCalcCustomers.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}

	else cout << "Unable to open file\n\n";

	
}


/*
Main displays options to user to access the gas calculator or to display the past customer list
*/
int main()
{
	char input;
   
   cout << "Please select an option from the following:\n";
   cout << "1 for gas calculator\n";
   cout << "2 for list of past transactions\n";
   cout << "3 to exit\n";
   
   cin >> input;
   switch (input)
   {
   case '1': 
	   cout << "Gas calculator selected\n\n";
	   gasFeeCalculation();
	   break;
	   
   case '2': 
	   cout << "Here are the list of past customers\n\n";
	   readCustomer();
	   break;
	   	   
   case '3':
	   exit(0);
   default: cout << "\a";
   }

}