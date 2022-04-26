#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    if(n==-1)
    return -1;
    if(n==0)
    return 1;
    else
    return (n*factorial(n-1));
}

int main()
{
    int n,r;
    cin>>n>>r;
    int ans=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ans<<endl;
    return 0;
}