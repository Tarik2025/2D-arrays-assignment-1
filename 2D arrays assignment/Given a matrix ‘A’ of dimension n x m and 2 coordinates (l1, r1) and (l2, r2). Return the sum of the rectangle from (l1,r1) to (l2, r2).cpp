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
    cout<<"enter the first coordinates l1 and r1 respectively :"<<endl;
    int l1,r1,l2,r2;
    cin>>l1>>r1;
    cout<<"enter the first coordinates l2 and r2 respectively :"<<endl;
    cin>>l2>>r2;
    int sum=0;
    for(i=l1;i<=l2;i++)
    {
        for(j=r1;j<=r2;j++)
        {
             sum+=arr[i][j];
        }
    }
   cout<<"The sum is :"<<sum;

}