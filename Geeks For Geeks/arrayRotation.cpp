#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    // int arr[] = {4,3,5,7,1,2,9};
    int n;
    cin >> n ;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    int d ;
    cin >> d ;

    while (d--)
    {
        int temp=arr[0];
        for(int i=1 ; i<n ; i++)
        {
            arr[i-1]=arr[i];
        }

        arr[n-1]=temp;

    }

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] ;
    }
    
}