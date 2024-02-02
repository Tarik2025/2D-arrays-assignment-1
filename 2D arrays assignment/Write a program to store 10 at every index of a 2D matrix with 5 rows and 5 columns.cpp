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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            arr[i][j]=10;
        }
        cout<<endl;
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

}