# include <fstream>
# include <iostream>
using namespace std;
void ghifile(fstream &file, int a[100][100],int &n){
    file>>n;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++){
            file>>a[i][j];
        }
}
void bai3(fstream &file, int a[100][100],int n){
    int b = 0;
    int c[n] = {0};
    for (int i=0; i<n; i++){
        int count=0;
        for (int j=0; j<n; j++){
            if (a[i][j]==0){
                count++;
            }
            if (a[j-1][i] == 1 &&count ==n){
                b++;
                c[i]=i+1;
            }
        }
        count=0;
    }
    file<<b<<endl;
    for (int i =0; i<n; i++){
        if(c[i]!=0){
            file<<c[i]<<" ";
        }
    }
}
void bai1them(fstream &file, int a[100][100],int n){
    file<<n<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (a[i][j]==1){
                file<<j+1<<" ";
            }
        }
        file<<endl;
    }
}
int main(){
    fstream fin;
    fin.open("D:/c++/input.txt",ios::in);
    fstream fout;
    fout.open("D:/c++/output.txt",ios::out);
    int a[100][100],n;
    ghifile(fin,a,n);
    bai3(fout,a,n);
    fin.close();
    fout.close();
    return 0;
}