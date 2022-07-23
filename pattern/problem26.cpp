#include<iostream>
using namespace std;
int main()
{
int row=4;
for(int i=1;i<=row;i++)
{
    int space=row-i;
    for(int sp=1;sp<=space;sp++)
    {
        cout<<"*";
    }
    for(int j=1;j<=i;j++)
    {
        cout<<j;
    }
    for(int k=i-1;k!=0;k--)
        {
            cout<<k;
        }
    int lastspace=row-i;
    for(int z=1;z<=space;z++)
    {
        cout<<"*";
    }
    cout<<endl;
}

}