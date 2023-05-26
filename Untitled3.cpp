# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <iomanip>
# include <conio.h>
# include <math.h>
# include <fstream>
using namespace std;
void ghifile2(fstream &file, int A[], int &n, int &m)
{
    file >> n >> m;
    for (int i = 0; i < n; i++)
    {
        file >> A[i];
    }
}

int nguyento(int n)
{
    if (n == 2)
        return 1;
    if (n < 2 || n % 2 == 0)
        return 0;
    for (int i = 3; i <=(int)sqrt(n); i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}
bool Chinhphuong(int n)
{
    if (n < 1)
        return false;
    int i = sqrt(n);
    return i * i == n;
}
bool Hoanchinh(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}
void count(fstream &file, int A[], int n)
{
	int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        if (nguyento(A[i]))
            x++;
        if (Chinhphuong(A[i]))
            y++;
        if (Hoanchinh(A[i]))
            z++;
    }
    file << "Bai 15: " << x << " " << y << " " << z << endl;

}
void sum(fstream &file, int a[], int n, int m)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] + a[j] == m)
                count++;
    file << "Bai 16: " << count << endl;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void ghifile (FILE *file, int *A, int n)
{
	for (int i=0; i<n; i++)
	{
		fprintf (file,"%d ",A[i]);
	}
}
void luufile (FILE *file, int *&A, int &n, int&m)
{
	fscanf (file,"%d%d",&n,&m);//luu giu gia tri n
	A = new int[n];
	for (int i=0; i<n; i++)
	{
		fscanf(file,"%d",&A[i]);//luu giu gia tri cua day so
	}
}
int TongTB (int *A, int n)
{
	float s=0;
	for (int i=0; i<n; i++)// vong lap de tinh tong 
	{
		s= s + A[i];
	}	
	 return s/n;
}
void sort(fstream &file, int A[], int n)
{
	for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
                swap(A[i], A[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        file << A[i] << " ";
    }
}
void dayconlientiep(fstream &file, int A[], int n)
{
    int count = 1;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] <= A[i + 1])
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

int main()
{
	fstream fin;
    fin.open("NUM.INP", ios::in);
    fstream fout;
    fout.open("NUM.OUT", ios::out);

	const char *filePath = "C:\\Users\\hoang\\Desktop\\3120411160_DCT120C3_CLC.rar\\num.inp.txt";
	FILE *file = fopen (filePath,"rt");
	// kiem tra xem file mo duoc hay ko?
	if (!file) 
    cout << "Can not open this file" << endl;
    else
    {
      cout << "File is opened"<<endl;
    }
    FILE *fp= fopen ("C:\\Users\\hoang\\Desktop\\3120411160_DCT120C3_CLC.rar\\num.out.txt","wt");
    //khai bao bien
    int n,m;
    float s;
    int *A;
    int x,y,z;
    //khai bao cac ham con de thuc hien chuong trinh trong ham main
    luufile (file,A,n,m);
    TongTB (A,n);
    fprintf (fp,"%d\n",TongTB(A,n));//Ghi Tong vao file fp
    ghifile (fp,A,n);
    ghifile2(fin, A, n, m);
    //dong file va xoa day so trong bo nho
    count(fout, A, n);
    sum(fout, A, n, m);
    dayconlientiep(fout, A, n);
    sort(fout, A, n);
    fclose(fp);
    fclose(file);
    delete []A;
    return 0;
}
