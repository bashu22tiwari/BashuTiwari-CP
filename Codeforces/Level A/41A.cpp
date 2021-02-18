#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s ;
    string t ;
    cin >> t ;
    int flag=1;
    int a=s.size() ;
    for(int i=0 ; i<a ; i++)
    {
        if(s[i]!=t[a-1-i])
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
}