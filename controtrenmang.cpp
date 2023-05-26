#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char con[]="hoc";
	char cha[]="hoa hoc";
	char *p= strstr(cha,con);
	cout<<(p-cha);
	return 0;
}
