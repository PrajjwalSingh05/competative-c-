#include<iostream>
using namespace std;
int main()
{
int n=65;
int row=3;
for(int i=0;i<row;i++)
{
    
    for(int j=0;j<=i;j++)
    {
        cout<<char(n);

    }
    n++;
    cout<<endl;
}
}