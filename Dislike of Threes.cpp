#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;

        for(int i=0;; i++)
        {
            if(i%3!=0 && i%10!=0)
            {
                count++;
                if(count==n)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}
