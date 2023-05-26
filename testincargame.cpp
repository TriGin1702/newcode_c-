#include <iostream>
using namespace std;
int main()
{
	int *a[5];
	for (int i=0;i<3; i++)
	{
		if (a[i]!=NULL)
		{
			cout<<"   ";
		}
	}
	for (int i=0;i<3; i++)
	{
		if (a[i]!=NULL)
		{
			cout<<"***";
		}
	}
	return 0;
}
