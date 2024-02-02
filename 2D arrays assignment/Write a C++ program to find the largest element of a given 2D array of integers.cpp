#include<iostream>
using namespace std;
int main()
{
    int n,m, i,j;
    cout<<"enter the no of rows in the matrix:";
    cin>>n;
    cout<<"enter the no of columns in the matrix:";
    cin>>m;
    int arr[n][m];
    cout<<"enter the elements in the array:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<" the elements in the matrix are:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int max=arr[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(max<arr[i][j])
         {
            max=arr[i][j];
         }
        }
    }
    cout<<"the largest element in the array is :"<<max<<endl;
}