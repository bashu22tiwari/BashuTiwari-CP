#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    string s1= "I hate it";
    string s2= "I hate that";
    string s3= "I love it";
    string s4= "I love that";
    for(int i=1 ; i<=n ; i++)
    {
        if(i%2==1 && i==n)
        {
            cout << s1 ;
        }
        else if(i%2==0 && i==n)
        {
            cout << s3 ;
        }
        else if(i%2==1)
        {
            cout << s2 << " " ;
        }
        else if(i%2==0)
        {
            cout << s4 << " " ;
        }
    }

}