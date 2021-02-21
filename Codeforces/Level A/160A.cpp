#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int array[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i] ;
    }

    sort(array , array+n , greater<int>());
    int count=0;
    for(int i=0 ; i<n ; i++)
    {
        count+=array[i] ;
    }
    int a=0;
    int i;
    for(i=0 ; i<n ; i++)
    {
        a+=array[i];
        if(a>count/2)
        {
            break;
        }
    }

    cout << i+1 ;
}