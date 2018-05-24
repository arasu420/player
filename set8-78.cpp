#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
   int n,m,k,i;
   cin>>n>>m;
   k=n+m;
   int a[n],b[m],c[k];
   for(i=0;i<n;i++)
   {
   cin>>a[i];
   }
   for(i=0;i<m;i++)
   {
   cin>>b[i];
   }
   for(i=0;i<n;i++)
   {
    c[i]=a[i];
   }
   for(i=0;i<m;i++)
   {
    c[i+n]=b[i];
   }
   sort(c,c+k);
   for(i=0;i<k;i++)
   {
   cout<<c[i];
   }
  return 0;
 }
