#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k ;
    int array[n];
    int count=0;
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i] ;
    }

    for (int i=0 ; i<n ; i++)
    {
        if(array[i]>0 && array[i]>=array[k-1])
        {
            count++;
        }
        else if (array[i]<array[k-1])
        {
            break;
        }
        
    }
    cout << count ;
    
}