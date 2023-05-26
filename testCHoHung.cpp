# include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int a[5] = {0,1,0,3,4};
    for (int i = 0; i < 5; i++){
        if (a[i]){
            cout<<a[i]<<endl;
        }
    }
}