#include <iostream>
using namespace std;

int foo (const int a, const int b)
{
    //a = 5; I can not modify this value
    int c = a + b;
    return c;
}

int main()
{
    //Using void foo(const int a) works but you can not modify the value of a
    //This can be used if you want the value of a to remain the same no matter what
    foo(2,3);
}