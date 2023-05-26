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
void bai1(fstream &file, int a[100][100],int n){
    file<<n<<endl;
    int count=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (a[i][j]==1){
                count++;
            }
        }
        file<<count<<" ";
        count=0;
    }
}
void bai2 (fstream &file, int a[100][100],int n){
    file<<n<<endl;
    for (int i=0; i<n; i++){
        int count1=0;
        int count2=0;
        for (int j=0; j<n; j++){
            if (a[i][j]==1){
                count1++;
            }
            if (a[j][i]==1){
                count2++;
            }
        }
        file<<count2<<" "<<count1<<endl;
    }
}
void bai3 (fstream &file, int a[100][100],int n){
    int b[n+1]={0};
    for (int i =0; i<n; i++){
        for (int j = 0;j<n;j++){
            if (a[i][j]){
                b[a[i][j]]++;
            }
        }
    }
    for (int i =1; i<n+1; i++){
        file<<b[i]<<" ";
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