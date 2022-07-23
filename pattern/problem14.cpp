#include<iostream>
using namespace std;
int main()
{
int row=3;

for(int i=0;i<row;i++)
{
    int n=65+i;
    for(int j=0;j<row;j++)
    {
        cout<<char(n);
        n++;
    }
    cout<<endl;

}

}