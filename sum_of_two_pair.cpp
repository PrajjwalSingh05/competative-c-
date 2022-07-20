#include<iostream>
#include<algorithm>
using namespace std;
void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Element at index"<<i<<"is "<<arr[i]<<endl;

    }

}
int pairsearch(int arr[],int size,int target)
{
    int sum=0;
    int start=0;
    int end=size-1;
    sort(arr,arr+size);
    display(arr,size);
    while(start<end)
    {
        if(arr[start]+arr[end]==target)
        {
            cout<<"found"<<arr[start]<<"+"<<arr[end]<<endl;
            return 1;
        }
        else if(arr[start]+arr[end]>target)
        {
            end=end-1;
        }
        else{
            start++;
        }
    }
    return 0;


}
int main()
{
    int arr[]={0, -1, 2, -3, 1};
    int target=-2;
    pairsearch(arr,5,target);
    return 0;



}