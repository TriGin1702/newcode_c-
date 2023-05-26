# include <iostream>
using namespace std;
class phanso{
	int tu; // khi bao o day la ham trong lop nen khi muon nhap lieu thi ta chi can (ten ps).tu or (ten ps).mau
	int mau;
	public:
		//khi bao trong ham public o day la ham trong lop nen khi muon nhap lieu thi ta chi can phanso (ten) = new phanso(tu,mau) 
		int UCLN(int x, int y)
		{
    		while (y != 0)
    		{
        		int r = x % y;
        		x = y;
        		y = r;
    		}
    	return x;
		} 	
		void rutgon()
		{
   			int d = UCLN(tu , mau);
    		tu = tu / d;
    		mau = mau / d;
		}
		void nhap()
    	{
        	cout << "Nhap lan luot tu va mau cua phan so : ";
        	cin >> tu >> mau;
    	}
    	void xuat()
    	{
        	cout <<	tu << "/" << mau << endl;
    	}
    	void cong(phanso a)
    	{
        	tu = tu*a.mau + mau*a.tu;
        	mau = mau*a.mau;
    	}
    	void tru(phanso a)
    	{
        	tu = tu*a.mau - mau*a.tu;
        	mau = mau*a.mau;
    	}
};
int main()
{
	phanso p1,p2,c;
	p1.nhap();
	p2.nhap();
	cout << "Cong = ";
    c = p1;
    c.cong(p2);
    c.rutgon();
    c.xuat();
    cout << "tru = ";
    c = p1;
    c.tru(p2);
    c.rutgon();
    c.xuat();
    return 0;
}
