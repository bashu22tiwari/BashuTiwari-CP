#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int tt;
    cin >> tt ;
    while(tt--)
    {
        int n;
        long long int ans ;
        cin >> n ;
        int arr[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i] ;
        }

        ans = (arr[0]*arr[1])+abs(arr[0]-arr[1]) ;

        for(int i=0 ; i<n ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                if((arr[i]*arr[j])+abs(arr[i]-arr[j]) > ans)
                {
                    ans = (arr[i]*arr[j])+abs(arr[i]-arr[j]); 
                }
            }
        }

        cout << ans << "\n" ;
    }
}