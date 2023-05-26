# include <iostream>
void incrementAndPrint()
{
    static int s_value = 1; // static duration variable
    ++s_value;
    int x=0;
    x++;
    std::cout << s_value<<"   "<< x <<'\n';
} // s_value is not destroyed here, but became inaccessible
 
int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    return 0;
}

//khi có static thì khi do la hàm trong class
//khi ko co stactic thi no trong doi tuong


