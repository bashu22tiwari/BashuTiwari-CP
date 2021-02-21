#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s ;
    int count=1;
    int flag=1;

    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            count=1;
        }

        if(count==7)
        {
            flag=0;
            break;
        }
    }

    if(flag==0)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
}