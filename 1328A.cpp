#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b, sum;
        cin>>a>>b;
        if(a%b!=0){
           sum=b-(a%b);
           cout<<sum<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}
