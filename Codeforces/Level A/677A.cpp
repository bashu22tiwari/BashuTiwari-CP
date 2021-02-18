#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n , h , count=0 ;
    cin >> n >> h ;
    int array[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i] ;
    }
    for(int i=0 ; i<n ; i++)
    {
        if(array[i]<=h)
        {
            count+=1;
        }
        else if(array[i]>h)
        {
            count+=2;
        }
    }

    cout << count ;
}