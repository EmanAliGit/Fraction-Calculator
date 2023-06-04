#pragma once
class Fraction
{
private:
	int N;
	int D;
public:
	Fraction();
	Fraction Init(int N, int D);
	void printfraction();

	Fraction Add( Fraction & F2);
	Fraction Subtract(Fraction & F2);
	Fraction Mult(Fraction&  F2);
	Fraction Div(Fraction & F2);
	Fraction Inverse();
	int GCD(int A, int B);
	
};

