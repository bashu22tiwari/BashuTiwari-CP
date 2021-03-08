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
        cin >> n;

        int ans=1;
        int count =0;
        while(1)
        {
            ans *=5;
            if((n/ans)==0)
            {
                break;
            }
            
            count += n/ans; 

        }

        cout << count << endl ;
    }
}

