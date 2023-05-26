# include <iostream>
# include <math.h>
using namespace std;
tong (int a[][100], int m, int n)
{
	int s=0;
	for (int i=0;i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			s += a[i][j];
		}
	}
	return s;
}
int main()
{
	int m,n;
	cout<<"nhap dong va cot: "<<endl;
	cin>>m>>n;
	int a[100][100];
	int s;
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]= "<<endl;
			cin>>a[i][j];
		}
	}
	cout<<"tong la: "<<tong(a,m,n);
	return 0;
}
