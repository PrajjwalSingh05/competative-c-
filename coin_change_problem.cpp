#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Element at index"<<i<<"is "<<arr[i]<<endl;

    }

}

int solve(int coin[],int n,int amount,int current_coin)
{
    if(amount==0)
    {
        return 1;
    }
    if(amount<0)
    {
        return 0;
    }
    int ways=0;
    for(int i=current_coin;i<n;i++)
    {
        ways=ways+solve(coin,n,amount-coin[i],i);
        
    }
    return ways;
}

int main()
{
 int coin[]={1,2};
 int amount=4;
 int n=2;
 display(coin,n);
 int ans=solve(coin,n,amount,0);
 cout<<ans;
 return 0;

 }