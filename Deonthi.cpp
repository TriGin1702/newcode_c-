#include <iostream>
#include <math.h>

using namespace std;
void input(int a[],int &n){
    cout<<"so phan tu: "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}
void frequency(int a[], int n, int b[]){
    for (int i = 0; i < n; i++)
    {
        b[a[i]-1]++;
    }
    for (int i = 0; i < n; i++)
    {
        if(b[i]){
            cout<<i+1<<" : "<<b[i]<<endl;
        }
    }     
}
int max(int b[], int n){
    int x =0;
    for (int i = 0; i <= n; i++)
    {
        if (x<b[i])
        {
            x= b[i];
        }
    }
    return x;
}
int sum(int a[], int n, int b[]){
    int y = max(b,n);
    int s =0;
    for (int i = 0; i < n; i++)
    {
        if(y == b[i]){
            s+= (i+1);
        }
        else if(b[i]== i+1 && b[i]){
            s+=  (i+1);
        }
    }
    return s;
    
}
int main()
{
    int n=9;
    int a[n];
    int b[10] = {0};
    input(a,n);
    frequency(a,n,b);
    cout<<sum(a,n,b);
    return 0;
}