#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b+c)
        cout<<"Yes\n";
        else if(b>a+c)
        cout<<"Yes\n";
        else if(c>a+b)
        cout<<"Yes\n";
        else
        cout<<"No\n";

    }
    return 0;
}