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
        cin >> array[i];
    }

    int max , maxpositon , min , minposition ;
    min = array[0] ;
    max = array[0] ;
    minposition=0;
    maxpositon=0;

    for(int i=0 ; i<n ; i++)
    {
        if(array[i]<=min)
        {
            minposition=i;
            min=array[i] ;
        }
        if(array[i]>max)
        {
            maxpositon=i;
            max=array[i];
        }
    }

    

    if(maxpositon<minposition)
    {
        cout << maxpositon+n-1-minposition;
    }
    else
    {
        cout << maxpositon+n-2-minposition;   
    }
    
}