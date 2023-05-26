# include <iostream>
# include <math.h>
# include <string.h>
# include <stdlib.h>
using namespace std;
void xoa (char a[], int &n)
{
	int xoa;
	cout<<"vi tri xoa: ";
	cin>>xoa;
	for (int i=xoa;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
void doi(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void sort(char a[], int &n)
{	
    cout<<"so truoc khi xep: ";
    for (int i = 0; i < n; i++)
    {
    	a[i]= atoi (a); 
    }
    cout<<endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if( (int)(a[i]) > (int) (a[j])) 
            {
                doi((int&)(a[i]),(int&)(a[j]));
            }
        }
    }
    for (int i=0; i<n;i++)
	{
		cout<<(int)a[i]<<"  ";
	}
}
int main()
{
	int n;
	cout<<"n= ";
	cin>>n;
	char a[n];
	for (int i=0; i<n;i++)
	{
		cout<<"a["<<i<<"]: "<<"    ";
		cin>>a[i];
	}
	sort(a,n);
	return 0;
}

