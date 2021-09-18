#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,count;
    cin>>s;
    for(int i=0; i<s.length(); i++ )
    {
        if(s[i]=='.')
        {
            count+='0';
        }
      if (s[i]=='-' && s[i+1]=='.')
        {
            count+='1';
            ++i;
        }
         if(s[i]=='-' && s[i+1]=='-')
        {
            count+='2';
            ++i;
        }

    }
cout<<count<<endl;

    return 0;
}
