#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
	string ar[n];
	for(i=0;i<n;i++)
	{
	cin>>ar[i];
	}
	sort(ar,ar+n);
	for(i=0;i<n;i++)
	{
	cout<<ar[i]<<endl;
	}
	return 0;
}
