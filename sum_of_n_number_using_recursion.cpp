#include<iostream>
using namespace std;
int getsum(int arr[],int n)
{
    if(n==0)
    {
        return arr[0];
    }
    else
    {
        
    int current_sum=arr[n];
    current_sum=current_sum+getsum(arr,n-1);
    return current_sum;
    }



}
int main()
{
    int arr[]={1,2,3,4,10};
    int n=4;
    int ans=getsum(arr,n);
    cout<<"the sum is :"<<ans;
    return 0;


}