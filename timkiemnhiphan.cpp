# include <iostream>
using namespace std;
struct sanpham {
    char ten[10];
    int gia;
};
sanpham * findBinary(sanpham a[],int n, int price){
    int left = 0;
    int right = n-1;
    int mid;
    while (left <= right){
        int mid = (left+right)/2;
        if (a[mid].gia == price){
            return &a[mid];
        }
        else if (price > a[mid].gia){
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return NULL;
}
int main(){
    int n;
    cout<<"so san pham = ";
    cin>>n;
    sanpham a[n];
    for (int i =0; i<n; i++){
        cout<<"nhap ten san pham: ";
        cin.ignore();
        gets(a[i].ten);
        cout<<"nhap gia san pham: ";
        cin>>a[i].gia;
    }
    for (int i =0; i<n; i++){
        cout<<a[i].ten<<endl;
        cout<<a[i].gia<<endl;
    }
    int price;
    cout<<"nhap gia san pham can tim: ";
    cin>>price;
    sanpham *x = findBinary(a,n,price);
    if (x!=NULL){
        cout<<x->ten<<endl<<x->gia;
    }
    else{
        cout<<"khong tim thay san pham voi gia do!";
    }
}