#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int count=1;
    int array[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i] ;
    }

    for(int i=0 ; i<n-1 ; i++)
    {
        if(array[i]!=array[i+1])
        {
            count++;
        }
    }

    cout << count ;

}