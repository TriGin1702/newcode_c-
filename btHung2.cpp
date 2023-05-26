# include <fstream>
# include <iostream>
# include <math.h>
using namespace std;
void ghifile(fstream &file, int a[100][50],int &n,int &m){
    file>>n>>m;
    for (int i=0; i<m; i++)
        for (int j=0; j<2; j++){
            file>>a[i][j];
        }
}
void bai4(fstream &file, int a[100][50],int n, int m){
    int b[m]={0};
    file<<n<<endl;
    for (int i=0; i<m; i++){
        for (int j=0; j<2; j++){   
            if(a[i][j]){
                b[a[i][j]]++;
            }
        }
    }
    for (int i=1; i<m; i++){
        file<<b[i]<<" ";
    }
}
int main(){
    fstream fin;
    fin.open("D:/c++/input.txt", ios::in);
    if (fin.fail()){
        cout<<"không thể mở file"<<endl;
    }
    fstream fout;
    fout.open("D:/c++/output.txt", ios::out);
    int a[100][50],n,m;
    ghifile(fin,a,n,m);
    bai4(fout,a,n,m);
    fin.close();
    fout.close();
    return 0;
}