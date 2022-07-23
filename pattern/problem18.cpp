#include<iostream>
using namespace std;
int main()
{

int row=4;
int ch=68;

// cout<<"vale"<<char(ch);
for(int i=0;i<row;i++)
{
    ch=68-i;
    for(int j=0;j<=i;j++)
    {
        cout<<char(ch);
        ch++;
    }
    cout<<endl;
}
return 0;
}