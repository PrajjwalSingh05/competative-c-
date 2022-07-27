#include<iostream>
using namespace std;
bool ispalindrome(string name,int i ,int j)
{
    if(i>j)
    {
        return true;
    }
    cout<<i<<"==" <<j<<endl;
    if(name[i]!=name[j])
    {
    cout<<name[i]<<"==" <<name[j]<<endl;
    return false;
    }

    i++;
    j--;
    ispalindrome(name,i,j);

}
int main()
{
    string name="mouhum";
    bool ans=ispalindrome(name,0,name.length()-1);
    // ans=false;
    cout<<"answer"<<ans<<endl;
    if(ans ==true)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"not Palindrome";
    }
    return 0;


}