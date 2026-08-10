#include <iostream>
using namespace std;
int main()
{
    int a[10],n;
    cout<<"Enter the arrey element:";
    cin>>n;
    cout<<"Enter the arrey element:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the arrey elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"";
        
    }

    return 0;
}
