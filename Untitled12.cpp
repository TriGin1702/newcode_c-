# include <math.h>
# include <iostream>
using namespace std;
int s (int n)
{
	if (n==-1)
	{
		return 0 ;
	}
	return n + s(n-2);
}
int main ()
{
	int n; 
	cout<<"n= ";
	cin>>n;
	cout<< s(n);
}
