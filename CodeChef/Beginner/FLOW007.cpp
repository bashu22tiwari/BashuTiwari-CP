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
        cin >> n ;
        int reverse=0;
        while(n)
        {
            int digit;
            digit = n%10;
            reverse = (reverse*10) + digit ;
            n/=10;
        }
        cout << reverse << endl ;
    }
}