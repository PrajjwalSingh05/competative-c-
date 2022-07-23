#include<iostream>
using namespace std;
int main()
{
int row=4;
for(int i=1;i<=row;i++)
{
    int space=row-i;
    for(int sp=0;sp<space;sp++)
    {
        cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
        cout<<i;
    }
    cout<<endl;

}
return 0;

}