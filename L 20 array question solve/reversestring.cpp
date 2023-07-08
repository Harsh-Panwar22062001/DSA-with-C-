#include<iostream>
using namespace std;

bool palindrome(char arr[],int n)
{
    int s = 0;
    int e = n-1;

    while (s<=e)
    {
        if(arr[s]!=arr[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
        
    }
    return 1;
}



void reverse(char name[] , int n) 
{
int s = 0;
int e = n-1;

while (s<e)
{
swap(name[s++],name[e--]);
     }
}


int getlength(char name[])
{
    int count = 0;
    for (int  i = 0;name[i]!='\0'; i++)
    {
        count++;
    }
   return count;
    
}

int main()
{
char name[20];

cout<<"Enter your Name"<<endl;
cin>>name;


cout<<"Enter Your Name"<<endl;
cout<<name<<endl;
int len = getlength(name);
cout<<"Length:"<<len<<endl;


reverse(name,len);
cout<<"Your name is ";
cout<<name<<endl;


cout<<"check  palindrome or not "<<endl<<palindrome(name,len)<<endl;
return 0;
}