#include<iostream>
#include<conio.h>
#include "Fraction.h"
using namespace std;
void Fraction:: printfraction()
{
	cout << this->N << "/" << this->D;
}
int main()
{
	int N, D;
	char choice;
	Fraction F3;
	do
	{
		system("cls");
		cout << "\t\t\t\tCALCULATOR FOR FRACTIONS";
		cout << endl;
		cout << "ENTER THE NUMERATOR AND THE DENOMINATOR FOR THE FRACTION FOR FRACTION 1";
		cout << endl;
		cin >> N >> D;
		Fraction F1;
		F1.Init(N, D);
		system("cls");
		cout << "\t\t\t\tCALCULATOR FOR FRACTIONS";
		cout << endl;
		int F, G;
		cout << "ENTER THE NUMERATOR AND THE DENOMINATOR FOR THE FRACTION FOR FRACTION 2";
		cout << endl;
		cin >> F >> G;
		Fraction F2;
		F2.Init(F, G);
		system("cls");
		cout << "1.  ";
	  F1.printfraction();
		cout << "\t 2.  ";
		F2.printfraction();

		cout << "\t\t Menu:" << endl << "ADD operator: +" << endl << "Subtract operator: -" << endl << "Multiply operator: *" << endl << "Divide operator: /" << endl <<
			"Inverse for Fraction 1: 1" << endl << "Inverse for fraction 2: 2";
		cout << endl;
		cout << "ENTER OPERATOR: ";
		
		
		char operation;
		cin >> operation;
		switch (operation)
		{
		case '+':
			 F3 = F1.Add(F2);
			break;
		case '-':
		 F3 = F1.Subtract(F2);
			break;
		case '*':
			 F3 = F1.Mult(F2);
			break;
		case '/':
		 F3 = F1.Div(F2);
			break;
		case '1':
		 F3 = F1.Inverse();
			break;
		case '2':
		 F3 = F2.Inverse();
			break;
		}
		cout << endl;
		F3.printfraction();
		cout << endl;
		cout << "DO YOU WISH TO CONTINUE? (Y/N)";
		cin >> choice;
	} while ((choice != 'N' && choice != 'n' )||(choice=='y'&&choice=='Y'));
}