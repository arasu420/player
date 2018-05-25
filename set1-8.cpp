#include <iostream>
#include <string>
using namespace std;
int main()
{
    char s[100];
    cin.getline(s,100);
    s[0]=s[0]-32;
    for (int i=0;s[i]!='\0';i++) 
    {
        if(s[i]== ' ') 
        {
            s[i+1]=toupper(s[i+1]);
        }
    }cout<<s;
  return 0;
}
