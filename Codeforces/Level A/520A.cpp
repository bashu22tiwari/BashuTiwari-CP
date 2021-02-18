#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    string s;
    cin >> s ;

    transform(s.begin() , s.end() , s.begin() , ::tolower);
    int array[26] ;
    for(int i=0 ; i<26 ; i++)
    {
        array[i]=0;
    }

    for(int i=0 ; i<s.size() ; i++)
    {
        array[s[i]-'a']++;
    }
    int flag=1;
    for(int i=0 ; i<26 ; i++)
    {
        if(array[i]==0)
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