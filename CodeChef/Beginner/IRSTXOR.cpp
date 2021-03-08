#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

void findAns(int *ans , int *limit , int N)
{
    
    while(1)
    {
        *ans *= 2;
        if(*ans>N)
        {
            break;
        }
        *limit = *ans ;
    }

    *limit-=1;
    *ans-=1;

}



int main()
{
    int tt;
    cin >> tt ;
    while(tt--)
    {
        int c;
        cin >> c ;
        int ans=1,limit=1;
        findAns(&ans , &limit , c);

        cout << limit << " " << ans << endl;


        int i,j,maxProduct=0 ;

        for(i=1 ; i<=limit ; i++)
        {
            for(j=limit ; j<=ans ; j++)
            {
                int a = i^j ;
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