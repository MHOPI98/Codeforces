#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n--)
    {
        int a,b,c,sum;
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum>=2){
            count++;
        }

    }
    cout<<count<<endl;
    return 0;
}
