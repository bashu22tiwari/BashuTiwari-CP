#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string s ;
    cin >> s ;
    string h="hello";
    int j=0;

    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]==h[j])
        {
            j++;
        }
    }

    if(j==5)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
}