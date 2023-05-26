# include <iostream>
# include <math.h>
# include <stdio.h>
# include <string.h>
using namespace std;
void xoa( char *&s,  int &n)
{
	int vitrixoa;
	cout<<"vitrixoa p: "<<endl;
	cin>>vitrixoa;
	for (int i= vitrixoa + 1  ; i<n; i++)
	{
		s[i]=s[i+1];
	}
	n--;
}
int main()
{
	char *s=new char[255];
	cout<<"nhap chuoi: "<<endl;
	gets(s);
	int n= strlen(s);
	int vitrixoa;	
	xoa(s,n);
	cout<<"chuoi sau khi xoa la: "<<endl;
	puts(s);
}
