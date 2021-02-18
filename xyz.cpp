#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n;
        cin >> n ;
        int d, max=0;
        int array[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> array[i];
        }
        for(int i=0 ; i<n-2 ; i++)
        {
            for (int j=1; j<n-1; j++)
            {
                for(int k=2 ; k<n ; k++)
                {
                    d = abs(array[i]-array[j]) + abs(array[j]-array[k]) + abs(array[i]-array[k]);
                    if(d>max)
                    {
                        max=d;
                    }

                }
            }
            
        }
    cout << max << "\n" ;
    }
}

