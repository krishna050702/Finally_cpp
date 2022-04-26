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
    int n;
    cin>>n;
    cout<<"Factorial is: "<<factorial(n)<<endl;;
    return 0;
}