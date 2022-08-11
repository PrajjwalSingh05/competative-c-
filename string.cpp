#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Element at index"<<i<<"is "<<arr[i]<<endl;

    }

}
void findcombination(string input,int i, string output)
{
    if(i==input.length())
    {
        cout<<output<<endl;
        return ;
    }
    char ch=input[i];
    output.push_back(ch);
    findcombination(input,i+1,output);
    output.push_back(' ');
    if(input[i+1]!='\0')
    {
    findcombination(input,i+1,output);

    }

}
int main()
{
    string str="123";
    string output="";
    int index=0;
    findcombination(str,index,output);

}