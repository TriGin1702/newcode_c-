# include <fstream>
# include <iostream>
using namespace std;
void ghifile(fstream &file, int a[100][50],int &n){
    file>>n;
    for(int i=0; i<n; i++){
        int b;
        if (i==0){
            b = 2;
        }
        if (i==1){
            b = 3;
        }
        if (i==2){
            b = 3;
        }
        if (i==3){
            b = 1;
        }
        if (i==4){
            b = 3;
        }
        for (int j=0; j<b; j++){
            file>>a[i][j];
        }
    }
}
void bai2(fstream &file, int a[100][50], int n, int &m){
    int count =0;
    int c[5]={0};
    int d[5]={0};
    for(int i=0; i<n; i++){
        int b;
        if (i==0){
            b = 2;
        }
        if (i==1){
            b = 3;
        }
        if (i==2){
            b = 3;
        }
        if (i==3){
            b = 1;
        }
        if (i==4){
            b = 3;
        }
        d[i]=i+1;
        for (int j=0; j<b; j++){
            if ( a[i][j] != j+1 && a[i][j] != i+1 && a[i][j] != d[j] && a[i][j] != d[j+1]){
                count++;
            }
        }
    }
    m = count;
    file<<n<<" "<<m<<" "<<endl;
    for(int i=0; i<n; i++){
        int b;
        if (i==0){
            b = 2;
        }
        if (i==1){
            b = 3;
        }
        if (i==2){
            b = 3;
        }
        if (i==3){
            b = 1;
        }
        if (i==4){
            b = 3;
        }
        c[i]=i+1;
        for (int j=0; j<b; j++){
            if (a[i][j] != j+1 && a[i][j] != i+1 && a[i][j] != c[j] && a[i][j] != c[j+1]){
                file<<i+1<<" "<<a[i][j]<<endl;
            }
        }
    }
}
int main(){
    fstream fin,fout;
    fin.open("D:/c++/input.txt",ios::in);
    fout.open("D:/c++/output.txt",ios::out);
    int n,m;
    int a[100][50]={0};
    ghifile(fin,a,n);
    bai2(fout,a,n,m);
    fin.close();
    fout.close();   
}

