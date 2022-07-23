#include<iostream>
using namespace std;
int main()
{
int row=4;
for(int i=row;i>0;i--)
{
    int space=row-i;
    for(int sp=0;sp<space;sp++)
    {
        cout<<" ";
    }
    for(int j=0;j<i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
return 0;

}