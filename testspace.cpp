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
    vector <int> g;
    vector <int> s;
    int n;
    int i =0;
    // char s = '0';
    // cout<<int(s);
    fin>>n;
    fprintf(fp,"%d\n",n);
    while (getline(fin, line)&& i<=n) {
        if (line[0]){
            i++;
            g.push_back(i);
        }
        for (int x =0; x<line.length();x++){
            if (((48<= int(line[x]) <= 57)&& line[x]!= ' ')){
                if (line[x] != ' '){
                    g.push_back(line[x]-48);
                }
            }
        }
    }
    fseek(fp,2,SEEK_SET);
    // for (auto l=g.rend()-1; l>=g.rbegin()+1; --l){
    //     cout<< *l <<" ";
    // }
    int v = g.size();
    for (int x=0; x<v-1;x++){
        // fprintf(fp,"%d ",g[x]);
        // if((g[x]==g[x+1] && g[x-1]==g[x+2])){
        //     x+=2;
        // }
        if (g[x]==g[x+1]){
            x++;
        }
        fprintf(fp,"%d ",g[x]);
        for (int j=1; j<x;j++){
            if (g[x]==g[j]){
                x++;
            }
        }
    }
    for (int x=0; x<g.size();x++){
        cout<<g[x]<<" ";
    }
    fclose(fp);
    fin.close();  
}