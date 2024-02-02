#include<iostream>
#include<climits>
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
    int maxs=INT_MIN;
    int row=-1; 
    int max;
    for(i=0;i<n;i++)
    {  int sum=0;
        for(j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
        if(sum>maxs)
        {
          max=sum;
          row =i;
        }
    }
    cout<<"the row number which has maximum sum :"<<row<<" "<<max<<endl;
}