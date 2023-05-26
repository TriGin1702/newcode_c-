#include <iostream>
#include <math.h>
using namespace std;
struct Complex
{
	int real;
	int imaginary;
}; Complex a; Complex b; Complex c;
void addComplex (Complex a,Complex b, Complex c)
{
	Complex sum;
	sum.real = a.real + b.real + c.real;
	sum.imaginary = a.imaginary + b.imaginary + c.imaginary;
	cout<<"Sum: "<<sum.real<<"."<<sum.imaginary<<"i"; 
}
void input()
{
	cout<<"write the first number ";
	cin>>a.real>>a.imaginary;
	cout<<"write the second number: ";
	cin>>b.real>>b.imaginary;
	cout<<"write the third number:";
	cin>>c.real>>c.imaginary;
}
int main ()
{
	input();
	addComplex(a,b,c);
}
