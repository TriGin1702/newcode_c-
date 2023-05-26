#include<iostream>
#include<float.h>
using namespace std;
int main ()
{
	float a = 10.0/3;
	a = a* 100000;
	double b;
	long double c;
	cout<<fixed<<a<<endl;
	cout<<LDBL_DIG<<endl;
//	dùng de hien chinh xac hon nhung gì duoc tinh vi kieu float la 1 dang dang dac biet
//  khong khi 1 so float co qua nhieu so thi dinh dang ( FLT_DIG , DBL_DIG, LDBL_DIG ) se tang do chinh xac tu trai sang phai
}
