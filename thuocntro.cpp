#include <iostream>
using namespace std;
int main()
{
	int x=2;
	int *a=&x;
	cout<<a<<endl;
	int *b;
	a=b;
	cout<<b<<endl;
	return 0;
}
