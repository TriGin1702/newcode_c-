# include <iostream>

using namespace std;
int main()
{
    int a[5]={1,3,5,7,9};
    int b[4]={2,4,6,8};
    int c[9];
    int i=0;
    int j=0;
    int k=0;
    while (i<5&&j<4)
    {
        if (a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    if (i<5)
    {
        for (int t=i; t< 5; )
        {
            c[k++]=a[t++];
        }
    }
    if (j<4)
    {
        for (int t=j; t<5; )
        {
            c[k++]=b[t++];
        }
    }
    for (int h=0; h<9; h++)
    {
        cout<<c[h]<<"\t";
    }
    return 0;
}