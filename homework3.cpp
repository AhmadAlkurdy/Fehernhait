// Ahmad Alkurdy
//  a program that mimcs a calculator
#include <iostream>

using namespace std;

int main ()
{
	// The program takes two integers and the operation to be preformed 
	double num1 = 0;
    double num2 = 0;
	double operation = 0;

	// codying the statments
	
	cout << "Enter an integer and press Return." << endl;
	cin >> num1;
	cout << "Enter an integer and press Return." << endl;
	cin >> num2;
	cout << "Select an operation from the following menu:" << '\n' << "1)Addition" << '\n' << "2)Subtraction" << '\n'
		<< "3)Multiplication" << '\n' << "4)Division" << endl;
	cin >> operation;

	// logical statements for the program to execute the right results

	if ( operation == 1 ) 
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	else if ( operation == 2) 
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	else if ( operation == 3 ) 
		cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
	else if ( operation == 4 &&  num2 == 0)
		cout << "ERROR! Division by zero is undefined." << endl;
	else if ( operation == 4 ) 
		cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
	
	system ("pause");
	return 0;
}