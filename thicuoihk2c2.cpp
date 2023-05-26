# include <iostream>
# include <math.h>
# include <stdio.h>
# include <iomanip>
# include <time.h>
# include <stdlib.h>
# include <conio.h>
using namespace std;
void xoa (  int *A[], int &n)
{
	int vitrixoa;
	cout<<"vitrixoa p: "<<endl;
	cin>>vitrixoa;
	for (int i= vitrixoa  ; i<n; i++)
	{
		*A[i-1]=*A[i];
	}
	n--;
}
int main()
{
	srand(time(NULL));
	int n;
	cout<<"nhap n: "<<endl;
	cin>>n;
	int *A[n];
	for (int i=0; i<n;i++)
	{
		A[i]=new int[100];
		*A[i]=1 + rand()%100;
		cout<<*A[i]<<"\t"; 
	}
	cout<<endl;
	xoa(A,n);
	cout<<"chuoi sau khi xoa: "<<endl;	
	for (int i=0; i<n;i++)
	{
		cout<<*A[i]<<"\t";
	}	
}
