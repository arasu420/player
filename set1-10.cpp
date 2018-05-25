# include <iostream>
using namespace std;
int main()
 { 
     int a,b,c=0;
     string s1,s2;
     cin>>s1>>s2;
     a=s1.length();
     b=s2.length();
     if(a==b)
     {
         for(int i=0;i<a;i++)
        {
             if(s1[i]!=s2[i])
             {
                 c++;
             }
       }
     }

     if(c==1)
     {
         cout<<"yes";
     }
     else
     {
         cout<<"no";
     }
       return 0;
 }
