# include <fstream>
# include <iostream>
using namespace std;
void ghifile(fstream &file, int a[100][100],int &n, int &m){
    file>>n>>m;
    for (int i=0; i<m; i++)
        for (int j=0; j<2; j++){
            file>>a[i][j];
        }
}
void bai1 (fstream &file, int a[100][100],int n, int m){
    file<<n<<endl;
    int b =1;
    for (int i =0; i<m-1; i++){
        for(int j =0;j<m; j++){
            if (a[j][0]== i+1){
                file<<a[j][1]<<" ";
            }
            if (a[j][1]==i+1){
                file<<a[j][0]<<" ";
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
    int a[100][100],n,m;
    ghifile(fin,a,n,m);
    bai1(fout,a,n,m);
    fin.close();
    fout.close();
    return 0;
}