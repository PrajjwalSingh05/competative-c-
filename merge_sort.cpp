#include<iostream>
using namespace std;


void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Element at index"<<i<<"is "<<arr[i]<<endl;

    }

}
void merge(int arr[],int start,int mid,int end)
{
    cout<<"Merge function";
    int i=start,j=mid+1,k=start;
    int temp[100];
    while(i<=mid && j<= end)
    {
        if(arr[i]<arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else if(arr[i]==arr[j])
        {
            temp[k]=arr[i];
            i++;
            j++;
            k++;

        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=end)
    {
        temp[k]=arr[j];
        k++;
        j++;
    }
    for(int i=0;i<=end;i++)
    {
        arr[i]=temp[i];
    }
}
void merge_sort(int arr[],int low,int high)
{
    // int mid ;
    if(low<high){
        int mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main()
{
    int arr[]={12,31,25,8,32,17,40,42};
    int n=8;
    cout<<"Before marging***********"<<endl;
    display(arr,n);
    cout<<"After marging***********"<<endl;
    merge_sort(arr,0,n-1);
    display(arr,n);
    return 0;






}