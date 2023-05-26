# include <iostream>
# include <string.h>
# include <math.h>
using namespace std;
int main()
{
	//khai bao cac bien da dung trong ham con
	int demkytu=0;
	int demtu=1;
	//khai bao ghi chuoi ky tu ma t muon
	char s[255];
	cout<<"chuoi s:"<<" ";
	gets(s);
	int y=0;
	for (int i=0; i<strlen(s); i++)
	{
		if ( s[i] == ' ')
		{
			demtu= demtu + 1;
			cout<<" :"<<"\t";
			cout<<demkytu;
			demkytu=0;// khi ket thuc 1 tu thi demkytu se tro ve gia tri 0 khi do no se tiep tuc dem ky tuc theo ham else
			cout<<endl;
		}
		else
		{
			cout<<s[i];
			demkytu ++;
			if ( y < demkytu)
			{
				y = demkytu;
			}
		}
	}
	cout<<" :"<<"\t"<<demkytu;//do tu cuoi duoc thuc hien trong ham else nhung khong co lenh xuat ra nen t dung leinh cout them lan nua 
	cout<<endl;
	cout<<"so tu trong cau la: "<<demtu<<endl;
	cout<<endl;
	int d=y;
	cout<<"tu dai nhat: "<<endl;
	for (int i=1; i< strlen(s); i++)
	{
		if ( s[i] == ' ')
		{
			demkytu=0;// khi ket thuc 1 tu thi demkytu se tro ve gia tri 0 khi do no se tiep tuc dem ky tuc theo ham else
			cout<<endl;
		}
		else
		{			
			demkytu ++;
			if (y==demkytu)
			{
				while (d>=0 )
			        {
			    	    cout<<s[i-d];
			    	    d--;
				    }
			}	
		}
	}
	cout<<endl;
	char *x= new char [255];
	cout<<"nhap chuoi x: "<<endl;
	gets(x);
	char *p= strstr(s,x);
	if (p==NULL)
	{
		cout<<"khong tim thay chuoi x trong chuoi s"<<endl;
	}
	else 
	{
		cout<<"thay chuoi x trong chuoi s o vi tri thu: "<<p-s<<endl;
	}
	delete []x;
	delete []p;
	return 0;
}
