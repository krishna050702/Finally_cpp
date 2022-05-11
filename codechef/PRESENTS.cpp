#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=(((n/5)*4) + (n%5));
        cout<<ans<<endl;
    }
    return 0;

}