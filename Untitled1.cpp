#include <iostream>
using namespace std;
int factorial(int n) {
if (n == 1) //ph?n neo
return 1;
else
return (n * factorial(n

- 1)); // ph?n d? quy

}
int main() {
cout << "Giai thua cua 5 la:" << factorial(5);
return 0;
}
