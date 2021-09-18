#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y;
        cin>>a>>b;
        x=a-b;
        y=b-a;
        if(a>b)
        {
            if(x%2==0)
            {
                cout<<"1"<<endl;
            }
            else{cout<<"2"<<endl;}
        }
        else if(a<b)
        {
            if(y%2==0)
            {
                cout<<"1"<<endl;
            }
            else{cout<<"2"<<endl;}
        }
        else if(a==b)
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
