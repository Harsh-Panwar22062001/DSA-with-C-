#include<iostream>
using namespace std;

bool prime(int n)

{
if(n<=1)

    return true;


for (int i = 2; i < n; i++)
{
    /* code */if (n/2==0)
    {
        /* code */ return false ;
    }
}
    return true;
}


int main()
{
    int n;
    cout<<"enter the no"<<endl;
cin>>n;

if (prime(n))
{
    /* code */cout<<" a helloprime  number"<<endl;

}

 else{
    cout<<"Not A Prime No"<<endl;
 }

}

