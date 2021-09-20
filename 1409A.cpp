#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum;
    cin>>t;
    while(t--)
    {
       long long a,b;
        cin>>a>>b;
        int x=abs(a-b);
        if(x%10==0)
        {
            sum=x/10;
        }
        else{
            sum=(x/10)+1;
        }
        cout<<sum<<endl;
    }
}
