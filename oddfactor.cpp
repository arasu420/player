#include <iostream>
#include <string>
using namespace std;
int main()
{
   int n,i;
   cout<<"enter the number  ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
       if(i%2!=0 && n%i==0)
       {
           cout<<i<<"  ";
       }       
   }
	return 0;
}
