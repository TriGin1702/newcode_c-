#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main(){
    vector <vector<int>> g;
    fstream fin;
    fin.open("D:/c++/input.txt",ios::in);
    fstream fout;
    fout.open("D:/c++/output.txt",ios::in);
    int n,m;
    fin>>n>>m;
    string line;
    int c[10] = {0,1,2,3,4,5,6,7,8,9};
    while (getline(fin, line)) {
        vector <int> h;
        for (int x =0; x<=line.length();x++){
            if (((48<= int(line[x]) <= 57) && line[x]!= ' ')){
                for (int j=0; j<10;j++){
                    if (c[j]==(int(line[x])-48)){
                        h.push_back(c[j]);
                    }
                }
            }
        }
            g.push_back(h);
    }
    for (int i=0; i<g.size();i++){
        for (int j=0; j<g[i].size();j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<g.at(2).at(1);
}