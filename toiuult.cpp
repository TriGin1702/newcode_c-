# include <iostream>
# include <math.h>
# include <cmath>
using namespace std;
struct diem
{
	float x;
	float y;
};
struct dt{
	diem cp;
	float length;
};
void mid (diem a, diem b)
{
	diem H;
	if (a.x==b.x&&a.y==b.y)
	{
		cout<<"khong co trung diem";
	}
	else
	{
		H.x= (a.x + b.x)/2;
	    H.y= (a.y + b.y)/2;
	    cout<<"toa do trung diem: H("<<H.x<<","<<H.y<<")"<<endl;
	}
}

void ptdt (dt ab, diem a, diem b)
{
	ab.cp.x = a.x - b.x;
	ab.cp.y = a.y - b.y;
	cout<<"phuong trinh duong thang: ";
	cout<<-1* ab.cp.y<<"x + "<<ab.cp.x<<"y+ "<<ab.cp.y*a.x + ab.cp.x*a.y*(-1)<<"= 0"<<endl;
}
int dodai (dt ab)
{
	ab.length=sqrt(pow(ab.cp.x,2)+pow(ab.cp.y,2));
}
int goc (dt ab, dt cd)
{
	cout<<"goc giua hai duong thang nay la: ";
	return abs(ab.cp.x*cd.cp.x	+ ab.cp.y*cd.cp.y)/(ab.length*cd.length);
}
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}
void sortArrTang(float e[]){
    for(int i=0;i<4-1;i++)
        for(int j=i;j<4;j++){
            if(e[i]>e[j]){
                swap(e[i], e[j]);
            }
        }
}
int main()
{
	diem A;
	cout<<"nhap toa do diem A:";
	cin>>A.x>>A.y;
	diem B;
	cout<<"nhap toa do diem B:";
	cin>>B.x>>B.y;
	mid(A,B);
	
	return 0;
}
