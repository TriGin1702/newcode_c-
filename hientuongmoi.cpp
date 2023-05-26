# include <iostream>
# include <math.h>
using namespace std;
struct phanso
{
    int tu;
    int mau;
};phanso a; phanso b; phanso c;phanso sum; phanso g; phanso h; phanso e;
void doips(phanso &x, phanso &y)
{
    phanso z = x;
    x = y;
    y = z;
}
void sort(phanso x[], int n)
{	
    cout<<"phan so truoc khi xep: ";
    for (int i = 0; i < n; i++)
    {
        cout<< x[i].tu << "/" << x[i].mau << " ";
    }
    cout<<endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if( ( (float) x[i].tu / x[i].mau) > ( (float) x[j].tu / x[j].mau) ) 
            {
                doips(x[i], x[j]);
            }
        }
    }
    cout<<"phan so sau khi sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout<< x[i].tu << "/" << x[i].mau << " ";
    }
    cout<<endl;
    cout<<"nhap phan so can tim: ";
    cin>>e.tu>>e.mau;
    for (int i = 0; i < n; i++)
    {
        if ( (( (float) e.tu / e.mau) == ( (float) x[i].tu / x[i].mau)) && (( (float) e.tu / e.mau) == ( (float) x[i].tu / x[i].mau)) !=EOF )
        {
        	cout<<"co phan so "<<e.tu<<"/"<<e.mau<<" trong day";
        	break;
		}
    }
}
int UCLN(int x, int y)
{
    while (y > 0)
    {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
} 	
void rutgon(phanso &ps)
{
    int d = UCLN(ps.tu, ps.mau);
    ps.tu = ps.tu / d;
    ps.mau = ps.mau / d;
}
phanso tongps(phanso x, phanso y)
{
    sum.tu = x.tu * y.mau + x.mau * y.tu;
    sum.mau = y.mau * x.mau;
    rutgon(sum);
    return sum;
}
int main ()
{
	cout<<"phan so a: ";
	cin>>a.tu>>a.mau;
	cout<<"phan so b: ";
	cin>>b.tu>>b.mau;
	tongps(a,b);
	a=sum;
	c=sum;
	cout<<"phan so c: "<<c.tu<<"/"<<c.mau<<endl;
	cout<<"phan so a sau khi cap nhat: "<<a.tu<<"/"<<a.mau<<endl;
	rutgon(b);
	cout<<b.tu<<"/"<<b.mau<<endl;
	int n=4;
	cout<<"phan so g: ";
	cin>>g.tu>>g.mau;
	cout<<"phan so h: ";
	cin>>h.tu>>h.mau;
	phanso k[4]= {a,b,g,h};
	sort(k,n);
	return 0;
}
