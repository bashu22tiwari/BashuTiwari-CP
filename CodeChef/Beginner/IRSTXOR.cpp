#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
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

        ans = (1<<(bit)) - 1;
        limit = (1<<(bit-1)) - 1 ;



        long int i;
        long long int j;
        long long int maxProduct=0 ;

        for(i=1 ; i<=limit ; i++)
        {
            for(j=limit+1 ; j<=ans ; j++)
            {
                
                (i^j)==c?maxProduct=max(maxProduct , (i*j)):0;
            }
        }

        cout << maxProduct << "\n";
    }
}