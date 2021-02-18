#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int x = 0 ;
    while(n--)
    {
        string s ;
        cin >> s ;
        if(s[0]=='+')
        {
            x++;
        }
        else if(s[0]=='-')
        {
            x--;
        }
        else if(s[2]=='+')
        {
            x++;
        }
        else if(s[2]=='-')
        {
            x--;
        }
    }
    cout << x << endl ;
}