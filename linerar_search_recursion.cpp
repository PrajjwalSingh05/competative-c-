#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Element at index"<<i<<"is "<<arr[i]<<endl;

    }

}
bool linear_search(int arr[],int n,int target)
{
    if(n==0)
    {
        return false;
    }
    if(target==arr[n])
        {
            return true;
        }
    else{
            return linear_search(arr,(n-1),target);
        }
    
}

int main()
{
    int arr[]={3,5,1,2,6};
    int n=4;
    display(arr,n);
    cout<<"***************"<<endl;
    int target=21;
    bool ans=linear_search(arr,n,target);
    if(ans==false)
    {
        cout<<"not found";
    }
    else{
        cout<<"Found in array";
    }
    return 0;

}