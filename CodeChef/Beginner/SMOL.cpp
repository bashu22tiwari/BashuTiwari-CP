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
        int n,k;
        cin >> n >> k ;
        int ans ;
        
        if(n<k)
        {
            ans = n ;
        }
        else if(n==k)
        {
            ans = 0;
        }
        else if(n>k)
        {
            while(n>0)
            {
                n=n-k;
                ans=n;
            }
        }

        cout << ans << "\n" ;
        
    }
}