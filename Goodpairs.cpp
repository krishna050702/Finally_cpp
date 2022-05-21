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
        int count=0;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];

        map<pair<int,int>,int> same;
        for(int i=0;i<n;i++)
        {
            count+=same[{a[i],b[i]}];
            same[{b[i],a[i]}]++;
        }
        cout<<count<<endl;
    }
    return 0;
}