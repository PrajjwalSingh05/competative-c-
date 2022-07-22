#include<iostream>
using namespace std;
void display(char arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Element at index"<<i<<"is "<<arr[i]<<endl;

    }

}
bool palindrome(char arr[],int num)
{
    int i=0;
    int j=num-1;
    while(i<j)
    {
        if(arr[i]==arr[j])
        {
            i++;j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    char arr[]={'m','o','m'};
    int num=3;
    display(arr,num);
    cout<<palindrome(arr,num);
    return 0;


}