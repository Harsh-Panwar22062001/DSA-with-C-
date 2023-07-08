#include<iostream>
using namespace std;


    void countingNo(int n)
    {
    for (int i = 1; i <= n; i++)
    {
        /* code */cout<<i<< " ";
    }
    cout<<endl;
    
}
int main()
{
int n;
cout<<"enter the number"<<endl;
cin>>n;
 countingNo(n);

 return 0;
 }