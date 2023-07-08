#include<iostream>
using namespace std;
int main()
{
    int arr[10]={20,30,40,50} ;

cout<<"address of first memory block is "<<arr[3]<<endl;
    cout<<&arr[0]<<endl;

cout<<"address of 4 position "<<*arr<<endl;
cout<<"address of 5 position "<<*arr +1<<endl;
cout<<"address of 6 position "<<*arr+2<<endl;
cout<<"address of 7 position "<<*(arr+2)<<endl;
int  i = 3;
cout<< i[arr] <<endl;


}