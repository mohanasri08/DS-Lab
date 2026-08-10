#include <iostream>
using namespace std;
int main()
{
    int a[10][10],r,c,n;
    cout<<"enter the number of rows:";
    cin>>r;
    cout<<"enter the number of column:";
    cin>>c;
    cout<<"enter the array elements:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"the array elements are:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"";
        }
        cout<<endl;
    }
    return 0;
}    
