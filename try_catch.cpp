# include <iostream>
# include <math.h>
# include <stdio.h>
using namespace std;
int main ()
{
	try {
        int age =10;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw 20;
        }
    }
    catch (int age) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout <<age;
    } 
}
