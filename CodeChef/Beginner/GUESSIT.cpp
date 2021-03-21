#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int calculateNoOFactors(int n)
{
    int count=0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                count++;

 
            else // Otherwise print both
                count+=2;
        }
    }
    return count;
}

int main()
{
    int tt;
    scan("%d",&tt);
    while(tt--)
    {
        int n;
        scanf("%d",&n);
        
        for(int i=4; i<=1000000 ; i++)
        {
            if(calculateNoOFactors(i)%2==0)
            {
                continue;
            }
            else
            {
                printf("%d",i)
                fflush(stdout);
                int ans;
                cin >> ans;
                if(ans==1)
                {
                    break;
                }
                else if(ans==0)
                {
                    continue;
                }
                else if(ans==-1)
                {
                    exit(0);
                }
            }
        }

        printf("%d",i);
        fflush(stdout);

    }
}