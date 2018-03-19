#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
 int a[3],x,y;
 for(int i=0;i<3;i++)
 {
 cin>>a[i];
 }
sort(a,a+3);
 x=a[2];
 y=a[0] + a[1];
 if(x<y)
 {
     if (a [0] != a [1] && a [0] != a [2])
     {
     	if (a [1] != a [2])
     	{
     		cout <<"yes";
     	}
     	else
     	{
     	cout<<"no";
     	}
     }
     else
     {
     	cout <<"no";
     }
 }
 else
 {
     cout<<"no";
 }
 return 0;
}
