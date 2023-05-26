#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[] = "this Program Converts ALL LowerCase Characters to UpperCase";
    int n;
    n=strlen(str);
    cout<<n<<endl;
    for (int i=0; i < strlen(str); i++)
    {
        if (islower(str[i]))
            /*  Converting lowercase characters to uppercase  */
            str[i] = str[i] - 32;
    }
    puts(str);
    return 0;
}
