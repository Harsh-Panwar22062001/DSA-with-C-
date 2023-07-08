#include <iostream>
using namespace std;
int main()
{

    int num = 56;

    int *ptr = &num;

    cout << "the number is " << *ptr << endl;
    cout << "the address is" << ptr << endl;

    cout << "the size of" << sizeof(*ptr) << endl;
    cout << "the size of" << sizeof(num) << endl;
}