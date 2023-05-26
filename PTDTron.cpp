# include <iostream>
# include <math.h>
using namespace std;
struct diem{
	int x;
	int y;
}; 
struct circle{
	diem I;
	float R;
	float CV;
	float DT;
};
void ptdtr (circle &first)
{
	first.CV= 2*first.R*3.1416;
	first.DT= pow(first.R,2)*3.1416;
	cout<<"nhap toa do diem I: ";
	cin>>first.I.x>>first.I.y;
	int c= pow(first.I.x,2)+pow(first.I.y,2)-pow(first.R,2);
	cout<<"pt duong tron: "<<endl;
	cout<<"x^2 + y^2 - "<<2*first.I.x<<"x - "<<2*first.I.y<<"y + "<<c<<" =0"<<endl;
}
void swap(float &a, float &b)
{
    float temp =a;
    a=b;
    b=temp;
}
void sortArrTang(circle x[])
{
    for(int i=0;i<5-1;i++)
    {
        for(int j=i;j<5;j++){
            if((x[i].DT)>(x[j].DT)){
                swap(x[i].DT, x[j].DT);
            }
        }
    }   
}
int main()
{
	circle first;
	cout<<"ban kinh R: ";
	cin>>first.R;
	ptdtr(first);
	cout<<"chu vi hinh tron: "<<first.CV<<endl;
	cout<<"Dien tich hinh tron: "<<first.DT<<endl;
	circle x[5];
	cout<<"nhap gia tri cho tung hinh tron: "<<endl;
	for (int i=0; i<5; i++)
	{
		cout<<"x["<<i<<"] = ";
		cin>>x[i].DT;
	}
	cout<<"thu tu tang dan DT hinh tron: "<<endl;
	sortArrTang(x);
	for (int i=0; i<5; i++)
	{
		cout<<x[i].DT<<"  ";
	} 
}
