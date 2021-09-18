#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int upper=0 , lower=0,i;
    for(i=0; i<s.size(); i++)
    {
        if(isupper(s[i])){
            upper++;
        }
        else{
            lower++;
        }
    }
        if(upper<lower || upper==lower)
        {
            for(i=0; i<s.size(); i++){
                s[i]=tolower(s[i]);
            }
            cout<<s<<endl;
        }
        else if(upper>lower  ){
            for(i=0; i<s.size(); i++){
                s[i]=toupper(s[i]);
            }
            cout<<s<<endl;
        }

}
