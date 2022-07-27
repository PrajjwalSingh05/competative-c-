// check whereter the arry is sorted or not using binary search()
#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Element at index"<<i<<"is "<<arr[i]<<endl;

    }

}
bool check_sort(int arr[],int n)
{
    if((n==0)|| (n==1))
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {

    bool result=check_sort(arr+1,(n-1));
    return result;
    }
}   
int main()
{
    int arr[]={2,4,6,9,11};
    int n=5;
    display(arr,n);
    bool result=check_sort(arr,n-1);
    if (result==false)
    {
        cout<<"not sorted";

    }
    else{
        cout<<"sorted";
    }
    return 0;



}