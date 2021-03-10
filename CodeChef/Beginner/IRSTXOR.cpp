#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include "BigUnsigned.hh"
#include "BigIntegerUtils.hh" 
using namespace std;



int countBits(int N)
{
    return (int)log2(N)+1;
}



int main()
{
    int tt;
    cin >> tt ;
    while(tt--)
    {
        long int c;
        cin >> c ;
        long long int ans=1;
        long long int limit=1;
        int bit = countBits(c);
        int long long lower=1;

        ans = (1<<(bit)) - 1;
        limit = (1<<(bit-1)) - 1 ;
        lower = (1<<(bit-2)) - 1 ;




        long long int i=0;
        long long int j=0;
        long long int A=1;
        long long int B=1;


        // long long int maxProduct=0 ;

        for(i=lower ; i<=limit ; i++)
        {
            for(j=limit+1 ; j<=ans ; j++)
            {
                
                // (i^j)==c?maxProduct=max(maxProduct , (i*j)):0;
                if((i^j)==c)
                {
                    A=i;
                    B=j;
                }
            }
        }

        cout << A*B << "\n";
    }
}