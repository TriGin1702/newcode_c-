#include <iostream>

//cac bien toan cuc

int a[10],b[11];

int n,k;
using namespace std;

void print()

{

                for(int i = 0; i < k ;i++)

                                cout<< a[i] <<" ";

                cout<<endl;

}

//ham tim so tang tiep theo co the tang dc

int SoTang(int so)

{

                for(int i = so;i <= n; i++)

                {

                                if(b[i] == 0)

                                                return i;

                }

                return 0;

}

int giaithua(int so)

{

                int kq = 1;

                for(int i = 2; i <= so ;i++)

                                kq *=i;

                return kq;

}

int main()

{

                cout<<"n = ";cin>>n;

                cout<<"k = ";cin>>k;

                int soluong;

                soluong = giaithua(n) / giaithua(n-k);

                for(int i = 0; i < k; i++)//khoi dong mang ban dau

                {

                                a[i] = i + 1;b[a[i]] = 1;

                }

                print();

                int x,y;

                for(int i = 1;i < soluong;i++)

                {

                                //duyet tu cuoi ve dau

                                for(int j = k-1; j >=0;j--)

                                {

                                                x = SoTang(a[j]);

                                                if( x != 0)//neu tim dc so tang

                                                {                                                             

                                                                y = a[j];

                                                                a[j] = x;b[y] = 0;b[a[j]] = 1;//chon va danh dau lai

                                                                for(int m = j + 1; m < k ;m++)//duyet ve cuoi reset lai

                                                                {

                                                                                x = SoTang(1);

                                                                                y = a[m];

                                                                                a[m] = x;b[y] = 0;b[a[m]] = 1;

                                                                }

                                                                break;

                                                }

                                                else//neu ko tim so tang thi loai bo danh dau

                                                {

                                                                b[a[j]] = 0;

                                                                a[j] = 0;

                                                }

                                }

                                print();//xuat ket qua

                }

}