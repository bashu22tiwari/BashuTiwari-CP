#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    long int arr[n];
    long int ans=0;
    long int max=0;
    for(int i=0; i<n ; i++)
    {
        cin >> arr[i] ;
    }

    sort(arr,arr+n);

    for(int i=0 ; i<n ; i++)
    {
        ans = (arr[i]*(n-i)) ;
        if(ans>max)
        {
            max = ans ;
        }
    }

    cout << max ;
}