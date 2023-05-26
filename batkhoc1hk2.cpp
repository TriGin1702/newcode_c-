#include <iostream>
#include <math.h>
using namespace std;
int isPrime(int n)
{
    if (n == 2) return 1;
    if (n < 2 || n%2==0) return 0;
    for (int i = 3; i <= (int)sqrt(n); i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}
int count(int a[], int n)
{
    if (n<1)
        return 0;
    return isPrime(a[n - 1]) ? count(a, n - 1) + 1 : count(a, n - 1);
}
int main()
{
    int a[5] = {6, 5, 4, 2, 10};
    cout << count(a,5)<<endl;
    return 0;
}


