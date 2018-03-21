#include <iostream>
#include <string>
using namespace std;
int main()
{
 int n,i;
cout<<"enter the number  ";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
if(n>a[i])
{
cout<<a[i]<<" ";
}
}
return 0;
}
