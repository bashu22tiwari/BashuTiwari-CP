#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

long int findAns(int N)
{
    int ans=1;
    while(1)
    {
        ans *= 2;
        if(ans>N)
        {
            break;
        }
    }

    return ans-1 ;
}

int main()
{
    int tt;
    cin >> tt ;
    while(tt--)
    {
        int c;
        cin >> c ;
        long int ans;
        ans = findAns(c);


        long int i,j,maxProduct=0 ;

        for(i=1 ; i<=ans ; i++)
        {
            for(j=i+1 ; i<=ans ; j++)
            {
                long int a = i^j ;
                if(a==c)
                {
                    if( i*j > maxProduct)
                    {
                        maxProduct=i*j;
                    }
                }
            }
        }

        cout << maxProduct << endl ;
    }
}