#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    int flag=1;
    cin >> n ;
    int array[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i] ;
    }

    for(int i=0 ; i<n ; i++)
    {
        if(array[i]==1)
        {
            flag=0;
            break;
        }
    }

    if(flag)
    {
        cout << "EASY" ;
    }
    else
    {
        cout << "HARD" ;
    }

}