#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n , x,sum=0;
        cin >>n >> x;
        int arr[n];
        for (int i =0; i<n ; i++){
        cin >> arr[i];
        sum += arr[i];
        }
        sort(arr,arr+n);
        int res = sum / x;
        int res2 = (sum - arr[0])/ x;
        
        if (res == res2){
            cout << -1<<endl;
        }else{
            cout << sum/ x <<endl;
        }
    }
    return 0;
}