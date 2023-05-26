#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int m,n;
	cout<<"nhap m va n: "<<endl;
	cin>>m>>n;
	int **p= new int*[m];
	for (int i=0; i<m; i++)
	{
		p[i]= new int[n];
	}
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			p[i][j]=i+j;
			cout<<p[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<p[2][3]<<endl;
	int *x= new int[5];
	for (int i=0; i<5; i++)
	{
		x[i]=1+i;
		cout<<x[i]<<"\t";
	}
	cout<<endl;
	for (int i=0; i<m; i++)
	{
		delete *(p+i);
		*(p+i)=NULL;
	}
	delete p;
	p=NULL;
	if (p == NULL)
	{
		cout<<"DELETED";
	}
}
