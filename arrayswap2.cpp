#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */ cout << arr[i] << " ";
    }
    cout << endl;
}

void swaparray(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int odd[5] = {3, 4, 5, 6, 8};
    int even[6] = {4, 6, 8, 9, 2, 3};

    swaparray(odd, 5);
    printarray(odd, 5);
    swaparray(even, 6);
    printarray(even, 6);

    return 0;
}