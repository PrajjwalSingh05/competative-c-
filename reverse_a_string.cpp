#include<iostream>
using namespace std;
string reverse_string(string& name ,int i,int j)
{
    cout<<name<<endl;
    if(i>j)
    {
        return name  ;
    }
    swap(name[i],name[j]);
    i++;
    j--;
    reverse_string(name,i,j);

}
int main()
{
string name ="prajjwal";

reverse_string(name,0,name.length()-1);
cout<<"answer"<<name;
return 0;

}