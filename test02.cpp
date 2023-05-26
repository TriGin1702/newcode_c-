#include <iostream>
using namespace std;
int tru(int a){
    return --a;
}
int main(int arg, char **argv){
    // int n;
    // cout<<"n: ";
    // cin>>n;
    // int s =0;
    // int a[n][10];
    // for (int i=0; i<n; i++)
    //     for(int j =0;j <i; j++){

    //         a[i][j]= i+j+1;
    //         s = s + (i + j-1);
    //     }
    // for (int i=0; i<n; i++){
    //     for(int j =0;j <i; j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<++s;
    // int k = atoi(argv[1]);
    // cout<<k<<endl;
    int c = 3;
    int i1 = 2;
    auto b =[] (int &i){
        return ++i;
    };
    auto g = [](int i1){
        return ++i1;
    };
    cout<<g(i1)<<endl;
    for(int i=0; i<5; i++){
        cout<< b(c)<<" ";
    }
    cout<< tru(c) << endl;
}