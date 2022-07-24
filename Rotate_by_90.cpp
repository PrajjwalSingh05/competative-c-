#include<iostream>
using namespace std;
void display(int arr[4][4],int n)
{
    for (int i=0;i<n;i++)
    {

    for(int j=0;j<n;j++)
    {

    cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
}
void transpose(int arr[4][4],int n)
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

}
void reverser(int arr[4][4],int n)
{
    for(int i=0;i<n;i++)
    {
    int start=0;
    int end=n-1;
        while(start<end)
        {
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;

        }
    }
}
int main()
{
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=4;
    display(arr,n);
    cout<<"after transpose "<<endl;
    transpose(arr,n);

    display(arr,n);
    cout<<"after rotate by 90  "<<endl;
    reverser(arr,n);

    display(arr,n);

}