#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,m;
        cin>>a>>b>>m;
        int an=min(abs(a-b),(abs(m-max(a,b)+min(a,b))));
        cout<<an<<endl;
    }
    return 0;
}