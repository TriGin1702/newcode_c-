# include <iostream>
# include <math.h>
using namespace std;
int tong (int a[], int n)
{
	int s=0;
	for (int i=0; i<n ;i++)
	{
		s += a[i];
	}
	return s;
}
int main()
{
	int s;
	int n;
	cout<<"n= "<<endl;
	cin>>n;
	int a[n];
	for (int i=0; i<n ;i++)
	{
		cout<<"a["<<i<<"]= "<<endl;
		cin>>a[i];
	}
	cout<<tong(a,n);
}
