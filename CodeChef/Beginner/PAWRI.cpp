#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        string s;
        cin >> s;
        for(int i=0 ; i<s.size()-4 ; i++)
        {
            if(s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y')
            {
                s[i+2]='w';
                s[i+3]='r';
                s[i+4]='i';
            }
        }
        cout << s << "\n" ;
    }
}