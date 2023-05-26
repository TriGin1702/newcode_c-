#include <cstdlib>
#include <iostream>
  
using namespace std;
  
int main()
{
    char str[] = "11.03eab 0mn";
    char* end;
    double number;
  
    number = strtod(str, &end);
    cout << "number = " << str << endl;
    cout << "double = " << number << endl;
    cout << "end string = " << end << endl;
  
    return 0;
}
