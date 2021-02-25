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
        long int n , k ;
        cin >> n >> k ;
        long int array[k];
        for(int i=0 ; i<k ; i++)
        {
            cin >> array[i] ;
        }

        while(n--)
        {
            string s;
            cin >> s ;
            long int ans=0;
            for(int i=0; i<k ; i++)
            {
                if(s[i]=='1')
                {
                    ans+=array[i];
                }
            }
            cout << ans << "\n" ;
        }
    }
}