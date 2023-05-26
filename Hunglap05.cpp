#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main() {
    fstream fin;
    fin.open("D:/c++/input.txt",ios::in);
    FILE *fp;
    fp = fopen("D:/c++/output.txt","wt");
    string line;
    int n,m,k;
    int i =0;
    int a[50][50] ={0};
    int b[10]={0};
    int c[10] = {0,1,2,3,4,5,6,7,8,9};
    int d[10]={0};
    fin>>n>>m;
    // fprintf(fp,"%d \n",n);
    cout<<n;
    while (getline(fin, line)&& i<=n) {
        if (line[0]){
            i++;
            a[i][0]=i;
        }
        for (int x =0; x<=line.length();x++){
            if ((48<= int(line[x]) <= 57 && line[x]!= ' ')){
                for (int j =0 ; j<10; j++){
                    if ((int(line[x])-48)==c[j]){
                        a[i][x+1] = c[j];
                    }
                }
            }
        }
    }
    int t=0;
    k=0;
    d[m]++;
    for (int x=1; x<n+1; x++){
        for (int j=1; j<3;j++){
            int h = j;
            while (a[x][h]!=0){
                if(a[x][0]==m && d[a[x][h]]==0){
                    b[k] = a[x][h];
                    k++;
                    d[a[x][h]]++;
                    h++;
                }
            }
            if (a[x][0]==m){
                m = a[x][j];
                x = a[x][j];
            }
        }
    }
    // fprintf(fp,"%d \n",t);
    for (int x=0; x<n ; x++){
        if (b[x]){
            // fprintf(fp,"%d ",b[x]);
            cout<<b[x]<<" ";
        }
    }
    fclose(fp);
    fin.close();
    return 0;  
}