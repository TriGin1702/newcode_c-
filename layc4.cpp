#include <iostream>
#include <fstream>
#include <math.h>
# include <iomanip>
# include <conio.h>
using namespace std;
void ghi(fstream &file, int a[], int &n, int &m)
{
    file >> n >> m;
    for (int i = 0; i < n; i++)
    {
        file >> a[i];
    }
}
void TBC(fstream &file, int a[], int &n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    int s= tong/n;
    file << "Bai 14: " <<fixed<< setprecision(1) << s << endl;
}
int SNT(int n)
{
    if (n == 2)
        return 1;
    if (n < 2 || n % 2 == 0)
        return 0;
    for (int i = 3; i <= (int)sqrt(n); i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}
bool CP(int n)
{
    if (n < 1)
        return false;
    int i = sqrt(n);
    return i * i == n;
}
bool HC(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}
void count(fstream &file, int a[], int n)
{
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        if (SNT(a[i]))
            x++;
        if (CP(a[i]))
            y++;
        if (HC(a[i]))
            z++;
    }
    file << "Bai 15: " << x << " " << y << " " << z << endl;
}
void tong(fstream &file, int a[], int n, int m)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] + a[j] == m)
                count++;	
    file << "Bai 16: " << count << endl;
}
void dayconlientuc(fstream &file, int a[], int n)
{
    int count = 1;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= a[i + 1])
            count++;
        else
        {
            if (count > max)
                max = count;
            count = 1;
        }
    }
    file << "Bai 17: " << max << endl;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}	
void sort(fstream &file, int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        file << a[i] << " ";
    }
}
int main()
{
    fstream inside;
    inside.open("num.inp", ios::in);
    fstream outside;
    outside.open("num.out", ios::out);
    int a[1000], n, m;
    ghi(inside, a, n, m);
    TBC(outside, a, n);
    count(outside, a, n);
    tong(outside, a, n, m);
    dayconlientuc0.(outside, a, n);
    sort(outside, a, n);
    inside.close();
    outside.close();
    return 0;
}

