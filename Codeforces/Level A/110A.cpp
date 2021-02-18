#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    long int n ;
    cin >> n ;
    int count=0 ;
    int a;
    while(n)
    {
        if(n%10==4 || n%10==7)
        {
            count++;
        }
        n=n/10;
    }

    if(count==4 || count==7)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    cout << count ;
}