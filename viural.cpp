#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int n,a;
    cout<<"n= "<<endl;
    cin>>n;
    int s=0;
    for (int i =1;i<=n;i++)
    {
	s=s+i;
    }
    cout<<"tong la: "<<s<<endl;
    cout<<"tim doi so: "<<endl;
    cin>>a;	
    if ((a==(char)(a)||a<0) && a==EOF)
    {
		cout<<"doi so khong phai la so nguyen duong"<<endl;
    }
    if (a>0)
    {
    	cout<<"doi so la: "<<a<<endl;
	}
    int b[3];
    cin>>b[0]>>b[1]>>b[2];
    if (b[2]!=NULL||b[2]==(char)(b[3]))
    {
		cout<<"co qua nhieu doi so"<<endl;
    }
    return 0;	
}
