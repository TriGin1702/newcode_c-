# include <iostream>
# include <math.h>
using namespace std;
void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}
void add (int a[], int &n)
{
	int them;
	cout<<"so them: ";
	cin>>them;
	for (int i=n;i>(-1);i--)
	{
		if (them<a[i])
		{
			a[i+1]=a[i];
		 	a[i]=them;
		}
	}
	n++;
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
}
int main()
{
	int n;
	cout<<"n: ";
	cin>>n;
	int a[n];
	int right = n;
	int left = 0;
	int mid = (left + right)/2;
	for (int i=0; i<n;i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	for (int i=0;i<n-1;i++)
	{
		for (int j = i+1; j<n; j++)
		if (a[i]>a[j])
		{
			swap(a[i],a[j]);
		}
	}
	for (int i=0; i<n; i++)
	{
		cout<<a[i]<<"  ";
	}
	int socantim;
	cout<<"so can tim: "<<endl;
	cin>>socantim;
	for (int i= left;i<=mid;i++)
	{
		if (a[i]==socantim&&(a[i]==socantim)!=EOF)
		{
			cout<<"vi tri xuat hien so do la: "<<i<<endl;
		}
	}
	for (int j = right;j>mid;j--)
	{
		if(a[j]==socantim&&(a[j]==socantim)!=EOF)
		{
			cout<<"vi tri xuat hien so do la: "<<j<<endl;
		}
	}
	add(a,n);
	return 0;
}
