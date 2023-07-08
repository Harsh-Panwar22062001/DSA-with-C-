#include <iostream>
using namespace std;
int main()
{
    int n;
    int m=0<n>101;
    m++;
    /*cout << "enter the number" << endl;
    cin >> n;*/

    if (m == 2)
    {
        cout << "it is prime no" << endl;
    }
    
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            cout << "it is not a prime no" << endl;
        }

        else
        {
            cout << "it is a prime no" << endl;
            cout<<m;
        }
    }
    return 0;
}