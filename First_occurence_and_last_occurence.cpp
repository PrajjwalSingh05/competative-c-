#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Element at index"<<i<<"is "<<arr[i]<<endl;

    }

}
int first_Occurence(int arr[],int start,int end ,int target)
{
    int pos=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            pos=mid;
            end=mid-1;
        }
        else if (arr[mid]>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        // cout<<"Element "<<pos<<endl;
    }
    return pos;
}
int last_Occurence(int arr[],int start,int end ,int target)
{
    int pos=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            
            pos=mid;
            start=mid+1;
        }
        else if (arr[mid]>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        // cout<<"Element "<<pos<<endl;
    }
    return pos;
}
int main()
{
    int arr[]={3,4,5,5,5,5,8,12};
    int n=8;
    // display(arr,n);
    cout<<"The Fist Occurence of 5 is :"<<first_Occurence(arr,0,n-1,5)<<endl;
    // cout<<"The Fist Occurence of 5 is :"<<first_Occurence(arr,0,n-1,8)<<endl;
    // cout<<"The Fist Occurence of 5 is :"<<last_Occurence(arr,0,n-1,8)<<endl;
    cout<<"The Last Occurence of 5 is :"<<last_Occurence(arr,0,n-1,5)<<endl;
    return 0;


}