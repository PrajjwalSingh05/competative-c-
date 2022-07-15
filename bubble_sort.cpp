#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Element at index"<<i<<"is "<<arr[i]<<endl;

    }

}

int main()
{
 int arr[]={-2,45,0,11,-9};
//  int arr[]={1,2,3,4,5};
 int n=5;
 display(arr,n);
 for (int i=0;i<n-1;i++)
 {
    bool swapstatus=false;
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            swapstatus=true;
        }
    }
    if(swapstatus==false)
    {
        cout <<"no required";
        break;
    }
 }

cout<<"*************************";
display(arr,n);
return 0;
}
