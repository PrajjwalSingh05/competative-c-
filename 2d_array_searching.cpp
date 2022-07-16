#include<iostream>
using namespace std;
void display2darray(int arr[3][3],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout <<arr[i][j];
            cout<< " ";
        }
        cout<<endl;
    }
    // binarysearch(arr,row,column,mid,target)
}
bool binarysearch(int arr[][3],int row,int column,int target)
{
    // cout<<"Runing column funcyiom";
    int start=0;
    int end=column-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[row][mid]==target)
        {
            // cout<<"jgfjdgegjio";
            cout<< row <<" "<< mid;
            return true;
        }
        if(target>arr[row][mid])
        {
            start=mid+1;
        }
        if(target<arr[row][mid])
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return false;

}
bool search(int arr[3][3],int column,int row,int target)
{
    int start=0;
    int end=row-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid][0]==target)
        {
        
            return true;
            cout<<"Tndes is :"<< mid<<"0";
        }
        if(arr[mid][column-1]==target)
        {
            cout<<"Tndes is :"<< mid<<"0";
            return true;
        }
        if(target>arr[mid][0] &&target<arr[mid][column-1])
        {
            cout<<"inside";
            int result =binarysearch(arr,mid,column,target);
            return result;

        }
        if(target<arr[mid][0])
        {
            // cout<<"goinf to next linr";
            end=mid-1;
        }
        if(target>arr[mid][row-1]){
            // cout<<"going to upper line";
            start=mid+1;

        }
        mid=start+(end-start)/2;
    }
    return false;


}
int main()
{

int arr[3][3]={1,5,9,14,20,23,30,34,43};
int c=3;
int r=3;
display2darray(arr,r,c);
// cout<<"**********************";
int res=search(arr,c,r,43);
// cout<<"The resukt is "<<res<<endl;;
return 0;
}