#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Element at index"<<i<<"is "<<arr[i]<<endl;

    }

}
int optimal_strategry(int arr[],int i,int j)
{
    if(i>j)
    {
        return 0;
    }
    int choice1=arr[i]+min(optimal_strategry(arr,i+2,j),optimal_strategry(arr,i+1,j-1));
    int choice2=arr[j]+min(optimal_strategry(arr,i+1,j-1),optimal_strategry(arr,i,j-2));
    return max(choice1,choice2);
}
int main()
{
 int arr[]={20,30,2,2,2,10};
//  int arr[]={1,2,3,4,5};
int i=0;
int j=5;
 int ans=optimal_strategry(arr,i,j);
 cout<<"ams"<<ans;
 return 0 ;
}