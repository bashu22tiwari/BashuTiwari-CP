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
    int even=0,odd=0;
    int e,o;
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i] ;
    }

    for(int i=0 ; i<n ; i++)
    {
        if(array[i]%2==0)
        {
            even++;
            e=i+1;
        }
        else
        {
            odd++;
            o=i+1;
        }
    }

    if(even==1)
    {
        cout << e ;
    }
    else
    {
        cout << o ;
    }
}