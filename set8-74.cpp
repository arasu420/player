#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count=0;
    string a;
    cin>>a;    
    n=a.length();
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
            }
        }
        
    }
    
    if(count==0)
    {
        cout<<"no";
    }
    else
    {
        cout<<"yes";
    }
    return 0;
}
