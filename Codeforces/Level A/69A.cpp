#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int a1=0,b1=0,c1=0;
    while(n--)
    {
        int a,b,c;
        cin >> a >> b >> c; 
        a1+=a;
        b1+=b;
        c1+=c;
    }

    if(!(a1 || b1 ||c1))
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }

}