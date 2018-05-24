#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=0,k;
    cin>>n;
    m=n;
    while(m>0)
    {
        m=m/10;
        i++;
    }
    k=(n%10)+(n/pow(10,i-1));
    cout<<k;
    return 0;
}
