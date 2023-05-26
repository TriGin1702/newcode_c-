# include <iostream>
# include <math.h>
# include <stdio.h>
# include <iomanip>
# include <time.h>
# include <stdlib.h>
using namespace std;
int khongdequy (int x[], int n);
float s (int n)
{
	if (n==1)
	{
		return 1;
	}
	return ((float)1)/n + s(n-1);
}
int max(int a[],int m)
{
      if(m==1) return a[0];
      if (a[m-1]>max(a,m-1)) return a[m-1];
      return max(a,m-1);
}
int min(int a[],int m)
{
      if(m==1) return a[0];
      if (a[m-1]<min(a,m-1)) return a[m-1];
      return min(a,m-1);
}
int b (double t, double n, double A[])
{
	t=0;
	double x;
	if (n>1)
	{
		for (int i=0; i<3; i++)
		{
			A[1]=1;
			A[2]=1;
			A[0]=1;
			
		}
		for (int i=3; i<=n;i++ )
		{
			t = (i-1)*A[i-2] ;
			A[i]=t+A[i-1];
			x=A[i];
		}
	}
	else 
	{
		cout<<"n is not correct"<<endl;
	}
	return x;
}
int khudequy(int n)
{
	if (n==1||n==2)
	{
		return 1;
	}
    return khudequy(n-1)+(n-1)*khudequy(n-2);
}
int main()
{
	double t;
	double A[50];
	int a[50];
	int n;
	cout<<"n= "<<endl;
	cin>>n;
	cout<<fixed<<setprecision(2)<<s(n)<<endl;srand(time(NULL));
	int m;
	cout<<"so day so: "<<endl;
	cin>>m;
	int x[500];
	int y;
	for (int i=0;i<m;i++)
	{
		a[i]= 1 + rand()%100;
		cout<<a[i]<<"\t";
	}
	cout<<"max = "<<max(a,m)<<"\t";
	cout<<"min = "<<min(a,m)<<endl;
	cout<<"khong xai de quy: "<<khongdequy(x,n)<<endl;
	cout<<"dung de quy: "<<khudequy(n)<<endl;
	return 0;
}
int khongdequy (int x[], int n)
{
	int y;
	for (int i=1; i<=n; i++)
	{
		x[1]=1;x[2]=1;x[i]=x[i-1]+(i-1)*x[i-2];
		y= x[i];
	}	return y;
}

	
