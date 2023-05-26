#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhap so phan tu: "<<endl;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    int b = a[0];
    for(int i = 0; i<n;i++){
        if (b<a[i]){
            b= a[i];
        }
    }
    cout<<"so lon nhat"<<": "<<b<<endl;
    for(int i = 0; i<n-1;i++){
        for(int j=i+1; j<n;j++){
            if (a[i]>a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"day sap xe tu nho toi lon: "<<endl;
    for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    float s= 0;
    for(int i = 0; i<n;i++){
        s = s + a[i];
    }
    cout<<"tong trung binh cong cua day la: "<<s/n;
    return 0;
}