# include <iostream>
# include <math.h>
# include <cmath>
using namespace std;
struct diem
{
	float x;
	float y;
};diem A;diem B;diem C; diem D;diem E;
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
void minPT(float e[])
{
    	
}	
int main ()
{
	cout<<"A.x va A.y: ";
	cin>>A.x>>A.y;
	cout<<"B.x va B.y: ";
	cin>>B.x>>B.y;
	diem M;
	if (A.x==B.x && A.y==B.y)
	{
		cout<<"khong co trung diem"<<endl;
	}
	else 
	{
		M.x= (A.x + B.x)/2;
	    M.y= (A.y + B.y)/2;
	    cout<<"trung diem"<<" M("<<M.x<<","<<M.y<<")"<<endl;
	}
	diem AB;
	AB.x= B.x - A.x;
	AB.y= B.y - A.y;
	cout<<(-1)* AB.y<<"x + "<<AB.x<<"y+ "<<AB.y*A.x + AB.x*A.y*(-1)<<"= 0"<<endl;
	float a=sqrt(pow(AB.x,2)+pow(AB.y,2));
	cout<<"do dai doan thang AB: "<<a<<endl;
	cout<<"C.x va C.y: ";
	cin>>C.x>>C.y;
	cout<<"D.x va D.y: ";
	cin>>D.x>>D.y;
	diem CD;
	CD.x= D.x - C.x;
	CD.y= D.y - C.y;
	cout<<-1* CD.y<<"x + "<<CD.x<<"y+ "<<CD.y*C.x + CD.x*C.y*(-1)<<"= 0"<<endl;
	float b=sqrt(pow(CD.x,2)+pow(CD.y,2));
	cout<<"do dai doan thang CD: "<<b<<endl;
	if ( AB.x/CD.x==AB.y/CD.y)
	{
		if (AB.x==CD.x && AB.y==CD.y)
	    {
		    cout<<"2 duong thang trung nhau"<<endl;
	    }
		else 
		{
			cout<<"2 duong thang song song"<<endl;
		}
	}
	else
	{
		E.x= ((-(CD.y*C.x + CD.x*C.y*(-1)))/(CD.x) + (AB.y*A.x + AB.x*A.y*(-1))/(AB.x))/(-(CD.y)/(CD.x)+AB.y/(AB.x));
	    E.y= -(((AB.y*A.x + AB.x*A.y*(-1))) - (AB.y*E.x))/AB.x;
	    cout<<"toa do giao nhau"<<" E("<<E.x<<","<<E.y<<")"<<endl;
	}
	diem AD;
	AD.x= D.x - A.x;
	AD.y= D.y - A.y;
	float c=sqrt(pow(AD.x,2)+pow(AD.y,2));
	cout<<"do dai doan thang AD: "<<c<<endl;
	diem BD;
	BD.x= D.x - B.x;
	BD.y= D.y - B.y;
	float d=sqrt(pow(BD.x,2)+pow(BD.y,2));
	cout<<"do dai doan thang BD: "<<d<<endl;
	float min;
	float e[4]={a,b,c,d};
	for (int i=0;i<4; i++)
	{
		min = e[0];
		if (min>e[i])
		{
			min = e[i];
		}
	}
	sortArrTang(e);
	for (int i=0;i<4; i++){
		cout<<e[i]<<" ";
	}
	cout<<endl;
	cout<<"vay doan thang ngan nhat co gia tri la: "<<min;
	return 0;
}
