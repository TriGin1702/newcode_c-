# include <iostream>
# include <math.h>
using namespace std;
using namespace std;	
int add(int a, int b)
{
	return a + b;
}
using namespace std;	
int sub(int a, int b)
{
	return a - b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	char c;
	cin>>c;
	if (c=='+')
	{
		cout<<add(a,b)<<endl;
	}
	if (c=='-')
	{
		cout<<sub(a,b)<<endl;
	}
	else
	{
		cout<<"khong hop le"<<endl;
	}
	return 0;
}
