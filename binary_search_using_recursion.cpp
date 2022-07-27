#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Element at index"<<i<<"is "<<arr[i]<<endl;

    }

}
bool binary_search(int arr[],int target,int start,int end)
{
    int mid=start+(end-start)/2;
    if(start>end)
    {
        return false;
    }
    if(arr[mid]==target)
    {
        return true;
    }
    else if (arr[mid]>target)
    {
        return binary_search(arr,target,start,mid-1);

    }
    else
    {
        return binary_search(arr,target,mid+1,end);
    }

}
int main()
{
    int arr[]={2,4,6,8,10};
    int n=4;
    display(arr,n);
    int start=0;
    int end=n;
    int target=14;
    bool ans=binary_search(arr,target,start,end);
    if(ans==false)
    {
        cout<<"Element not found";
    }
    else
    {cout<<"element found";
    }
    return 0;
}