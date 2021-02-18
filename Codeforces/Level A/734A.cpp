#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    char array[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i];
    }
    int a=0,d=0;
    for(int i=0 ; i<n ; i++)
    {
        if(array[i]=='A')
        {
            a++;
        }
        else if(array[i]=='D')
        {
            d++;
        }
    }

    if(a>d)
        cout << "Anton" ;
    else if(d>a)
        cout << "Danik" ;
    else
        cout << "Friendship" ;
}