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
    int n,m;
    int i =0;
    int a[50][50] ={0};
    int c[10] = {0,1,2,3,4,5,6,7,8,9};
    vector <vector <int>> g;
    fin>>n>>m;
    fprintf(fp,"%d \n",n);
    while (getline(fin, line)&& i<=n) {
        if (line[0]){
            i++;
            // cout<<a[i][0]<<" ";
        }
        // for (int x =0; x<=line.length();x++){
        //     if ((48<= int(line[x]) <= 57 && line[x]!= ' ')){
        //         for (int j =0 ; j<10; j++){
        //             if ((int(line[x])-48)==c[j]){
        //                 a[i][x+1] = c[j];
        //             }
        //             if (a[i][x]==0){
        //                 a[i][x] = a[i][x+1];
                        
        //             }
        //         }
        //     }
        //     // if (a[i][x+1]>0){
        //     //     g.push_back(a[i][x+1]);
        //     // }
        // }
        for (int x=0; x<line.length(); x++){
            vector <int> h;
            for (int j=0; j<line.length();j++){
                h.push_back(int(line[x])-48);
            }
            g.push_back(h);
            // // x= g[k];
            // // m =x;
            // // k++;
            // cout<<g[0];
        }
    }
    int k =0;
    int t=0;
    cout<<a[4][0]<<endl;
    // for (int x=0; x<10; x++){
    //     vector <int> h;
    //     for (int j=0; j<n;j++){
    //         h.push_back(a[i][j]);
    //     }
    //     g.push_back(h);
    //     // // x= g[k];
    //     // // m =x;
    //     // // k++;
    //     // cout<<g[0];
    // }
    fprintf(fp,"%d \n",t);
    for (int x=0; x<g.size() ; x++){
        for(int j=0; j<g[x].size();j++){
            cout<<g[x][j]<<" ";
        }
        cout<<endl;
    }
    fclose(fp);
    fin.close();
    return 0;  
}