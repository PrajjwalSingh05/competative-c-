#include<iostream>
using namespace std;
int main()
{
int row=4;
for(int i=0;i<row;i++)
{
    for(int j=1;j<=(row-i);j++)
    {
        cout<<j;
    }
    for(int sp=0;sp<i;sp++)
    {
        cout<<"*";
    }
        // cout<<row<<endl;
    
    for(int k=0;k<i;k++)
    {
        cout<<"*";
    }
    for(int z=(row-i);z>0;z--)
    {
        cout<<z;
    }
    cout<<endl;
}


}