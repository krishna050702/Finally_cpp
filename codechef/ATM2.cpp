#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(k-arr[i]>=0)
            {
                k=k-arr[i];
                cout<<"1";
            }
            else
            cout<<"0";
            
        }
        cout<<endl;
    }
    return 0;
}