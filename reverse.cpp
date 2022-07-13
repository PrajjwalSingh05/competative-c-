#include<iostream>
using namespace std;
void display(int[] ,int );
void swapping(int [],int);
int main()
{
    int n;
    cout<<"Enter the number of element to be present in the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element to be inserted:";
        cin>>arr[i];
    }
    display(arr,n);
    swapping(arr,n);
    cout<<"Array after rever se is :"<<endl;
    display(arr,n);
    return 0;
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"The number at index:"<<i<<"is:"<<arr[i]<<endl;
    }
}
void swapping(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}
