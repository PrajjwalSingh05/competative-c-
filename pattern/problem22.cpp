#include<iostream>
using namespace std;
int main()
{
int row=4;
for(int i=1;i<=row;i++)
{
    int space=i-1;
    for(int sp=0;sp<=space;sp++)
    {
        cout<<" ";
    }
    for(int j=0;j<=(row-i);j++)
    {
        cout<<i;

    }
    cout<<endl;
}
return 0;

}