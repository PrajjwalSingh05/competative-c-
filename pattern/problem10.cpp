#include<iostream>
using namespace std;
int main()
{
int row=4;
for(int i=1;i<=row;i++)
{
    int temp=i;
    for(int j=1;j<=i;j++)
    {
        cout<<temp;
        temp--;
    }
    cout<<endl;
}
return 0;
}