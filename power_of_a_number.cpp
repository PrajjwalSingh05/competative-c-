#include<iostream>
using namespace std;
int power(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    else{
        return a*power(a,b-1);
    }
}
int main()
{
int a=2;
int b=4;
int ans=power(a,b);
cout<<"Anser is :"<<ans;
return 0;

}