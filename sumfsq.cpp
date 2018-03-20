#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n,r,r1,sum=0;
  cout<<"enter the number ";
  cin>>n;
  while(n!=0)
  {
      r=n%10;
      r1=r*r;
      n=n/10;
      sum=sum+r1;
  }
  cout<<"result"<<sum;
  return 0;
}
