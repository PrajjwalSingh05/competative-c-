#include<iostream>
using namespace std;
int main()
{
int row=3;
int n=65;
for(int i=1;i<=row;i++)
{
    for(int j=1;j<=row;j++)
    {
        cout<<char(n);
    }
    n++;
    cout<<endl;
}

return 0;
}