#include <iostream>
#include <fstream>
using namespace std;
void ghi(fstream &file, int a[100][100], int &n)
{
    file >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            file >> a[i][j];
    }
}
void A(fstream &file, int a[100][100], int &n)
{
    int chinh = 0;
    for (int i=0; i<n; i++)
    {
    	for (int j=0; j<n; j++)
    	{
    		if (i==j)
    		{
    			chinh += a[i][j];
			}
		}
	}
    int phu = 0;
    for (int i = 0; i < n; i++)
    {
        phu += a[n - i - 1][i];
    }
    file << "Cau a: " << chinh << " " << phu << endl;
}
void B(fstream &file, int a[100][100], int &n){
    int on = 0;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            on+=a[i][j];
        }
    }
    int down = 0;
    for(int i = 1;i<n;i++){
        for(int j=0;j<i;j++){
            down+=a[i][j];
        }
    }
    file << "Cau b: " << on << " " << down << endl;
}
int main()
{
    fstream inf; 
    inf.open("input.txt", ios::in);
    fstream fout;
    fout.open("output.txt", ios::out);
    int a[100][100], n;
    ghi(inf, a, n);
    A(fout,a,n);
    B(fout,a,n);
    inf.close();
    fout.close();
    return 0;
}

