#include<iostream>
#include<algorithm>
using namespace std;
bool ispossible(int arr[],int n,int mid,int target)
{
    int sum=0;
    int diff=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=mid)
        {
            diff=arr[i]-mid;
        }
        sum=sum+diff;
    }
    if(sum>=target)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int getmaxheight(int arr[],int n,int target)
{
    int pos=-1;
    sort(arr,arr+n);
    int start=0;
    int end=arr[n-1];
    while(start<=end)
    {
    int mid=start+(end-start)/2;
        if(ispossible(arr,n,mid,target))
        {
            pos=mid;
            start=mid+1;

        }
        else
        {
            end=mid-1;
        }
    }

}
int main()
{
int arr[]={15,8,18,6};
int n=4;
int target=35;
int ans=getmaxheight(arr,n,target);
cout<<ans;

}