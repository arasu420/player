#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the length ";
    cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
 sort(a,a+n);
 cout<<a[1];
   	return 0;
}
