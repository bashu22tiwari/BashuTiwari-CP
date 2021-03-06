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
        string s;
        cin >> s ;
        int a = s.size();
        int n = a/2;
        string s1(n,'1');
        string s2(n, '1');
        int flag=1;
        int j=0;
        if(a%2==0)
        {
            for(int i=0 ; i<n; i++)
            {
                s1[j]=s[i];
                s2[j]=s[i+n];
                j++;
            }

             sort(s1.begin() , s1.end());
            sort(s2.begin() , s2.end()); 
        }
        
        else
        {

            for(int i=0 ; i<n; i++)
            {
                s1[j]=s[i];
                s2[j]=s[i+n+1];
                j++;
            }

            sort(s1.begin() , s1.end());
            sort(s2.begin() , s2.end());
        }

        if((s1.compare(s2))==0)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }

}