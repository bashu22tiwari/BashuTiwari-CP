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
        int n,x;
        cin >> n >> x ;
       
        

        int maxImdb=0;

        while(n--)
        {
            int s,r;
            cin >> s >> r;
            if(s<=x)
            {
                maxImdb = max(r,maxImdb);
            }
        }
        

        cout << maxImdb << "\n";
    }
}