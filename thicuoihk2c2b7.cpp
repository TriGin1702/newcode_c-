# include <iostream>
# include <math.h> 
# include <time.h>
# include <stdlib.h>
using namespace std;
int main ()
{
	srand(time(NULL));
	int m;cout<<"m= "<<endl;
	cin>>m;
	int n;
	cout<<"n= "<<endl;
	cin>>n;
	int s=0;
	int **a=new int*[m];
	for (int i=0; i<m; i++)
	{
		a[i]=new int [n];
	}
	for (int i=0; i<m;i++)
	{
		for (int j=0; j<n; j++)
		{
			a[i][j]= 1 + rand()%100;
			cout<<a[i][j]<<"\t";
			s+= a[i][j];
		}
		cout<<endl;
	}
	cout<<"tong hang va cot la: "<<s;
	for (int i=0; i<m; i++)
	{
		delete []a[i];
	}
	delete []a;
	return 0;
}
