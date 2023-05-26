# include <iostream>
# include <string.h>
using namespace std;
struct diachi
{
	int nha;
	int truong;
};
struct sinhvien 
{
	char hoten[50];
	diachi sv;
};
int main ()
{
	sinhvien nam;
	cout<<"nhap ho ten: "<<endl;
	gets(nam.hoten);
	cout<<"nhap dia chi: "<<endl;
	cin>>nam.sv.nha;
	puts(nam.hoten);
	cout<<endl;
	cout<<nam.hoten;
	cout<<nam.sv.nha;
	return 0;
}
