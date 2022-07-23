#include<iostream>
using namespace std;
int main()
{

int row=4;
for(int i=row-1;i>=0;i--)
{
    for(int j=1;j<=i;j++ )
    {
        cout<<" ";
    }
    int space=row-i;
    for(int k=0;k<space;k++)
    {
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}