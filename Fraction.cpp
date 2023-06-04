#include "Fraction.h"
#include <iostream>
using namespace std;
Fraction::Fraction()
{
	this->N = this->D = 0;
}
Fraction Fraction::Init(int R, int D)
{
	this->N = R;
	this->D = D;
	return *this;
}

int Fraction :: GCD(int A, int B)
{
	
	
	int max = (A > B) ? A : B;
	do
	{
		if (max % A== 0 && max % B == 0)
		{
		
			break;
		}
		else
			++max;
	} while (true);
	return max;
}
Fraction Fraction::Add (Fraction & F2)
{
	int I=GCD(this->D, F2.D);
	int R1 = (this->N * (I / this->D));
	int R2 = (F2.N * (I / F2.D));
	Fraction F3;
	F3.D = I;
	F3.N = R1 + R2;
	return F3;
}
Fraction Fraction::Subtract(Fraction& F2)
{
	int I = GCD(this->D, F2.D);
	int R1 = (this->N * (I / this->D));
	int R2 = (F2.N * (I / F2.D));
	Fraction F3;
	F3.D = I;
	F3.N = R1 -R2;
	return F3;
}
Fraction Fraction::Mult(Fraction& F2)
{
	int R1 = (this->N * F2.N);
	int R2 = (this->D * F2.D);
	Fraction F3;
	F3.D = R2;
	F3.N = R1;
	return F3;
}
Fraction Fraction::Div(Fraction& F2)
{
	int R1 = (this->N * F2.D);
	int R2 = (this->D * F2.N);
	Fraction F3;
	F3.D = R2;
	F3.N = R1;
	return F3;
}
Fraction Fraction::Inverse()
{
	int R1 = this->N ;
	int R2 = this->D ;
	Fraction F3;
	F3.D = R1;
	F3.N = R2;
	return F3;
}

