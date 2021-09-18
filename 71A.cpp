#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=s.size();
        if(a>10)
        {
            cout<<s[0]<<a-2<<s[a-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}
