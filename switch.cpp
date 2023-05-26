# include <iostream>
using namespace std;
int calu(int a, int b){
    return a - b;
}

int main(){
    int a, b;
    cout<<"a,b = ";
    cin>>a>>b;
    int x = calu(a,b);
    switch (x)
    {
    case (1) :
        cout<<"ham dung"<<endl;
        break;
    default:
        break;
    }
}