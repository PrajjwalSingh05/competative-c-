#include<iostream>
using namespace std;
int main()
{
int row=4;
for(int i=0;i<row;i++)
{
    int ch=65+i;
    for(int j=0;j<=i;j++)
    {
        cout<<char(ch);
        ch++;
    }
    cout<<endl;
}
return 0;

}