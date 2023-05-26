#include <iostream>
#include <fstream>
using namespace std;
struct phanso
{
    int tu;
    int mau;
};
void ghi(fstream &file, phanso x[], int &n)
{
    file >> n;
    for (int i = 0; i < n; i++)
    {
        file >> x[i].tu >> x[i].mau;
    }
}
void doips(phanso &x, phanso &y)
{
    phanso z = x;
    x = y;
    y = z;
}
void sort(fstream &file, phanso x[], int n)
{
    file << "Bai 24: ";
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (((float)x[i].tu / x[i].mau) > ((float)x[j].tu / x[j].mau))
            {
                doips(x[i], x[j]);
            }
        }
    for (int i = 0; i < n; i++)
    {
        file << x[i].tu << "/" << x[i].mau << " ";
    }
    file << endl;
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
    int c = UCLN(ps.tu, ps.mau);
    ps.tu = ps.tu / c;
    ps.mau = ps.mau / c;
}
phanso tongps(phanso x, phanso y)
{
    phanso sum;
    sum.tu = x.tu * y.mau + x.mau * y.tu;
    sum.mau = y.mau * x.mau;
    rutgon(sum);
    return sum;
}
void tongArr(fstream &file, phanso a[], int n)
{
    phanso sum;
    sum.tu=0;
    sum.mau=1;
    for(int i=0;i<n;i++){
        sum=tongps(a[i],sum);
    }
    file <<"Bai 25: "<< sum.tu << "/" << sum.mau << " ";
}
int main()
{
    fstream fin;
    fin.open("input.txt", ios::in);
    fstream fout;
    fout.open("output.txt", ios::out);
    phanso arr[100];
    int n;
    ghi(fin, arr, n);
    sort(fout, arr, n);
    tongArr(fout,arr,n);
    fin.close();
    fout.close();
    return 0;
}

