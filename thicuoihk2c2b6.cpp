# include <iostream>
# include <math.h>
# include <stdio.h>
# include <iomanip>
# include <time.h>
# include <stdlib.h>
# include <conio.h>
using namespace std;
void max ( unsigned int *a[], int &p, int n)
{
	int dem=-1;
	for (int i=0; i<n;i++)
	{
		if(p<*a[i])
		{
			p=*a[i];
		}
	}
	for (int i=0; i<n; i++)
	{
		if(p==*a[i])
		{
			dem++;
		}
	}
	cout<<"so bang gia tri lon nhat trong day la: "<<dem<<endl;
}
int main()
{
	srand(time(NULL));
	int n;
	cout<<"n= "<<endl;
	cin>>n;
	int p=0;
	unsigned int *a[n];
	for (int i=0; i<n; i++)
	{
		a[i]= new unsigned int;
		*a[i]=1 + rand()%100;
		cout<<*a[i]<<"\t";		
	}
	cout<<endl;
	max (a,p,n);
	cout<<"gia tri lon nhat cua day la: "<<p;
}
