#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,k;
        cin>>n>>x>>k;
        int an=x*n;
        if(an<=k)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}