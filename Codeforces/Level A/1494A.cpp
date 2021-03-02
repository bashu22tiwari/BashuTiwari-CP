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
        string s ;
        cin >> s ;
        int a=0,b=0,c=0;
        int n = s.size() ;
        for(int i=0 ; i<n ; i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            else if(s[i]=='B')
            {
                b++;
            }
            else if(s[i]=='C')
            {
                c++;
            }
        }

        int sum = 0;
        int last = 0;
        if((a+b==c) || (b+c==a) || (a+c==b))
        {
            sum=1;
        }
        if(s[0]!=s[n-1])
        {
            last=1;
        }

        if(last && sum)
        {
            cout << "YES" << "\n" ;
        }
        else
        {
            cout << "NO" << "\n" ;
        }
    }
}