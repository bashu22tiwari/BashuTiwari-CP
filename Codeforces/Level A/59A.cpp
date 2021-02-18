#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s ;
    int l=0, u=0 ;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            l++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            u++;
        } 
    }
    if(l>=u)
    {
        transform(s.begin() , s.end() , s.begin() , ::tolower);
    }
    else
    {
        transform(s.begin() , s.end() , s.begin() , ::toupper);
    }

    cout << s ;
}