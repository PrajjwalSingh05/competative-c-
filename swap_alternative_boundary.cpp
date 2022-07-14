// Swap Alternate Boundary Pairs

// Difficulty Level : Basic
// Last Updated : 29 Jun, 2022
// Given an array arr[] of N integers, the task is to swap the first and the last element then the third and the third last element then fifth and fifth last and so on. Print the final array after all the valid operations.
 

// Input: arr[] = {1, 2, 3, 4, 5, 6} 
// Output: 6 2 4 3 5 1 
// Operation 1: Swap 1 and 6 
// Operation 2: Swap 3 and 4
// Input: arr[] = {5, 54, 12, 63, 45} 
// Output: 45 54 12 63 5 
#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Element at index"<<i<<"is "<<arr[i]<<endl;

    }

}
void alternative_swap(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i=i+2;
        j=j-2;
    }
    }

int main()
{
    int n;
    cout<<"Enter the number of element";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;+i++)
    {
        cout<<"Enter the element";
        cin>>arr[i];
    }
    display(arr,n);
    alternative_swap(arr,n);
    cout<<"***********************"<<endl;
    display(arr,n);
    return 0;

}