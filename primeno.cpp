#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"enter  a number"<<endl;
    cin>>n;
     int check = 0;
    for (int i=1; i<=n ; i++)
    {
        if (n%i == 0)
        {
        
        check++ ;
        
    }
    }
    if (check == 2)
    {
        /* code */cout<<"this is a prime number";
    }
    else
    {
        cout<<"this is not a  prime number";
    }
    
    

    
}