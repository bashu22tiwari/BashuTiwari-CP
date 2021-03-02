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
        int n;
        cin >> n ;
        int arr[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i] ;
        }

        sort(arr , arr+n);
        int flag=1;

        for(int i=0 ; i<n-1 ; i++)
        {
            if(arr[i+1]-arr[i] <= 1)
            {
                arr[i]=0;
            }
            else
            {
                flag=0;
            }
        }

        if(flag==0)
        {
            cout << "NO" << "\n" ;
        }
        else
        {
            cout << "YES" << "\n" ;
        }
    }
}