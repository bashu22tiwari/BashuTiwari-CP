#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int n,h,x;
    cin >> n >> h >> x ;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    int flag=0;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]+x >= h)
        {
            flag=1;
            break;
        }
    }

    if(flag)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
}