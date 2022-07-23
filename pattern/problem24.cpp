#include<iostream>
using namespace std;
int main()
{
int row=4;
for(int i=1;i<=row;i++)
{
    int space=i;
    for(int sp=1;sp<space;sp++)
    {
        cout<<" ";
    }
    for(int j=i;j<=row;j++)
    {
        cout<<j;
    }
    cout<<endl;
}
return 0;

}