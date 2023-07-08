#include<iostream>
using namespace std;
int main()
{
    int i = 10;
    int *p = &i;
    int **p2 = &p;



    cout<<"value of p "<<p<<endl;
    cout<<"value of i "<<i<<endl;
    cout<<"value of pointer p "<<*p<<endl;
    cout<<"value of address of p "<<&p<<endl;
    cout<<"value of address of p2 "<<p2<<endl;
    cout<<"value of address of i "<<&i<<endl;
    cout<<"value of  double pointer of p2 "<<**p2<<endl;



}