#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int c = INT_MAX;
    cout<<c<<endl;
    int a[5];
    a[0] = 0;
    for (int i=1;i<5;i++){
        a[i]= i+1;
    }
    for (int i=0;i<5;i++){
        if (a[i]){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}