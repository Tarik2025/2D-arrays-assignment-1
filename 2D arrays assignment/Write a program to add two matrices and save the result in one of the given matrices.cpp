#include<iostream>
using namespace std;
int main()
{
    int n,m, i,j,l,s;
    cout<<"enter the no of rows in the matrix:";
    cin>>n;
    cout<<"enter the no of columns in the matrix:";
    cin>>m;
    int arr[n][m];
     cout<<"enter the lements in the matrix 2:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          cin>>arr[i][j];
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
   cout<<"enter the no of rows in the  2nd matrix:";
    cin>>l;
    cout<<"enter the no of columns in the 2nd matrix:";
    cin>>s;
    int arr2[l][s];
    cout<<"enter the lements in the matrix 1:"<<endl;
    for(i=0;i<l;i++)
    {
        for(j=0;j<s;j++)
        {
          cin>>arr2[i][j];
        }
        cout<<endl;
    }
    cout<<" the elements in the  2nd matrix are:"<<endl;
    for(i=0;i<l;i++)
    {
        for(j=0;j<s;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    if(n!=l||m!=s)
    {
        cout<<"The matrix addition is not possible"<<endl;

    }
    else
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            arr[i][j]+=arr2[i][j];
            
        }
        
    }
    cout<<"The addition of two matrices is:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    }
}