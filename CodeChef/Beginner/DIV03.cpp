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
        long int arr[10];
        for(int i=0 ; i<10 ; i++)
        {
            cin >> arr[i];
        }
        long int k;
        cin >> k ;
        int a;

        for(int i=9 ; i>=0 ; i--)
        {
            if(arr[i]<=k)
            {
                k=k-arr[i];
                arr[i]=0;
            }
            else if(arr[i]>k)
            {
                a=i;
                break;
            }
        }

        cout << a+1 << "\n";
    }
}