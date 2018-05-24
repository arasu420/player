#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            sum=sum+a[i];
        }
        else
        {
            sum=sum+a[i+1];
        }
    }cout<<sum;
    return 0;
}
