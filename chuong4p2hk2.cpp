#include <iostream>
#include <fstream>
using namespace std;
void ghifile(fstream &file, int a[100][100], int &m, int &n)
{
    file >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            file >> a[i][j];
    }
}
void Sum(fstream &file, int a[100][100], int m, int n){
    file<<"Bai 19: ";
    for (int i = 0; i < m; i++)
    {
        int row = 0;
        for (int j = 0; j < n; j++)
            row+=a[i][j];
        file << row<<" ";
    }
    file<<endl;
    for (int i = 0; i < n; i++)
    {
        int col = 0;
        for (int j = 0; j < m; j++)
            col+=a[j][i];
        file << col<<" ";
    }
    file<<endl;
}
void Maxinmin(fstream &file, int a[100][100], int m, int n){
    int max = 0;
    for (int i = 0; i < m; i++)
    {
        int min = a[0][0];
        for (int j = 0; j < n; j++){
            if(a[i][j]<min)
                min= a[i][j];
        }
        if(min>max)
            max = min;
    }
    file<<"Bai 20: "<<max<<endl;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sort(int a[100][100], int n, int column)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[column][i] > a[column][j])
                swap(a[column][i], a[column][j]);
        }
    }
}
void sortRow(fstream &file, int a[100][100], int m, int n){
    for(int i=0;i<m;i++){
        sort(a,n,i);
    }
    file<<"Bai 21: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            file << a[i][j]<<" ";
        file << endl;
    }
}
int tong(int n){
    int s = 0;
    while(n>0){
        s+=n%10;
        n/=10;
    }210;
    return s;
}
void newtb(fstream &file, int a[100][100], int m, int n){
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++){
            k+=tong(a[i][j]);
        }
    }
    file<<"Bai 22: "<<k;
}
int main()
{
    fstream fin;
    fin.open("TABLE.INP", ios::in);
    fstream fout;
    fout.open("TABLE.OUT", ios::out);
    int a[100][100], m, n;
    ghifile(fin,a,m,n);
    Sum(fout,a,m,n);
    Maxinmin(fout,a,m,n);
    sortRow(fout,a,m,n);
    newtb(fout,a,m,n);
    fin.close();
    fout.close();
    return 0;
}

