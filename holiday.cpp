#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string dy;
	cin>>dy;
	int l=dy.length();
	char s[l];
	strcpy(s,dy.c_str());
	if(s[0]=='S'|| s[0]=='s')
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
