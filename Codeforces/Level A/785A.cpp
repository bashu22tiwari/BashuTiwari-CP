#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int tt;
    cin >> tt ;
    int ans=0;
    while(tt--)
    {
        string s;
        cin >> s ;
        if(s == "Tetrahedron")
        {
            ans+=4;
        }
        else if( s == "Cube")
        {
            ans+=6;
        }
        else if(s == "Octahedron")
        {
            ans+=8;
        }
        else if(s == "Dodecahedron")
        {
            ans+=12;
        }
        else if(s == "Icosahedron")
        {
            ans+=20;
        } 
    }

    cout << ans ;
}