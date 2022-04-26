#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int o=n;
    while(n>0)
    {
        int last=n%10;
        sum=sum+pow(last,3);
        n=n/10;
    }
    if(sum==o)
    cout<<"Armstrong number\n";
    else
    cout<<"Not Armstrong number\n";
    return 0;
}