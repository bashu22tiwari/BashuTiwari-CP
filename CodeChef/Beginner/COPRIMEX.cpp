#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int coprime(int a, int b) { 
      
    if ( __gcd(a, b) == 1) 
        return 1;
    else
        return 0;        
}

int main()
{
    int tt;
    cin >> tt ;
    while(tt--)
    {
        int l,r;
        int x=2;
        cin >> l >> r ;
        int a=r-l+1;
        int count=0;
        int ans;

        
        while(count<a)
        {
            count=0;
            for(int i=l ; i<=r ; i++)
            {
                if(coprime(x,i))
                {
                    count++;
                }
            }
            ans=x;
            x++;
        }

        cout << ans << "\n" ;
    }
}