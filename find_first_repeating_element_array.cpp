#include<iostream>
using namespace std;
void display(int ar[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"The element is "<<ar[i]<<endl;

    }
}
int first_repeating(int arr[],int n)
{   int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

    }
    int temp[max+1];
    for (int i = 0; i < max + 1; i++)
        temp[i] = 0;
    for(int i=0;i<n;i++)
    {
        int num=arr[i];
        temp[num]++;
    }
    cout<<"*************************"<<endl;
    display(temp,max+1);
    for(int i=0;i<n;i++)
    {
      if(temp[i]>1){

        return i;
      }
    }
    return 0;
}
int binarysearch(int arr[],int n,int target)
{
    int low=0,high=n-1;
    int mid=(low+high)/2;
    if(arr[mid]>target)
    {
        
    }
    
}
int main(){
    int arr[] = { 10, 10, 3, 4, 3, 5, 6 };
    int n=7;
    display(arr,n);
    int result=first_repeating(arr,n);
    if(result>=1)
    {
        cout<<" First Occurence is "<< result<<endl;
    }
    else
    {
        cout<<" NO First Occurence "<<endl;

    }
    return 0;
}