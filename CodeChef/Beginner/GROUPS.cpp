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
        string s;
        cin >> s;
        int count = s[0]=='1'?1:0;
        int n=s.size();
        for(int i=1 ; i<n ; i++)
        {
            if(s[i]=='1' && s[i]!=s[i-1])
            {
                count++;
            }
        }

        cout << count << "\n";
    }
}