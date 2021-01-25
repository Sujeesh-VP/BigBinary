#include <iostream>
#include <vector>

using namespace std;

int main()
{
   string s;
   int f=1;
   cin>>s;
   vector<int> a;
   a.push_back(0);
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='(')
        a.push_back(1);
       if(s[i]=='{')
        a.push_back(2);
       if(s[i]=='[')
        a.push_back(3);
        if(s[i]==')')
        {
            if(a[a.size()-1]==1)    
                a.pop_back();
            else
            {
                f=0;
                break;
            }
        }
       if(s[i]=='}')
        {
            if(a[a.size()-1]==2)    
                a.pop_back();
            else
            {
                f=0;
                break;
            }
        }
        if(s[i]==']')
        {
            if(a[a.size()-1]==3)    
                a.pop_back();
            else
            {
                f=0;
                break;
            }
        }
   }
   if(a.size()==1 && f==1)
    cout<<"true";
   else
    cout<<"false";
   
   return 0;
}
