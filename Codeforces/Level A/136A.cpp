#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int array1[n];
    int array2[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> array1[i] ;
    }

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(array1[j]==i+1)
            {
                array2[i]=j+1;
            }
        }
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << array2[i] << " " ;
    }
}