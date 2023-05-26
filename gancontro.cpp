#include <iostream>
using namespace std;
int main()
{
	int x= 2;
	int *a=&x;
	int *b;
	*b=*a;
	cout<<"b= "<<*b;
	
}
