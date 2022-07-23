#include<iostream>
using namespace std;
int main()
{
int row=3;
for(int i=1;i<=row;i++)
{
    int n=65;
    for(int j=1;j<=row;j++)
    {
        cout<<char(n);
        n++;
    }
    cout<<endl;
}
return 0;
}