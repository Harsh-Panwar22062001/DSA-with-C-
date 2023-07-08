#include<iostream>
using namespace std;


    int binary(int arr[],int size,int key)

{
    int start = 0 ; 
    int end= size-1 ;


int mid = (start+end)/2;
while (start<= end) 
{
    /* code */if(arr[mid]==key)
    {
        return mid;
    }
    if (key>arr[mid])
    {
        /* code */start=mid+1;
    }
    else {
        end=mid-1;
    }
    
mid = (start+end)/2;

}
return -1;
}


    int main()

    {

        int even[6]={ 2,4,6,8,9,18};
        int odd[5]={1,2,3,4,5};


       int evenindex = binary(even,6,18);
        int oddindex = binary(odd,6,4);

cout<<"the index is "<<evenindex;
cout<<endl;
cout<<"the index is "<<oddindex;

        return 0;
    }
