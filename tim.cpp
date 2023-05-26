#include <iostream>
#include <time.h>
using namespace std;
int find(int a[10], int n, int x){
    int i;
    for (i =0; (i<n) && (a[i] !=x) ;i++ );
    if(i==n)
        return -1;
    else
        return i;
    
}
int main(){
    int n,x,y;
    cout<<"n = ";
    cin>>n;
    int a[n];
    srand(time(NULL));
    for (int i =0; i<n ;i++ ){
        a[i] = 1 + rand()%50;
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    cout<<"nhap so can tim: ";
    cin>>x;
    y = find(a,n,x);
    cout<<"vi tri tim thay: "<<y;
    return 0;
}