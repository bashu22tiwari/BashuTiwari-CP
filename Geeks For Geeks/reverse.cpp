#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[0];
    }

    int d;
    cin >> d ;

    for(int i=0 ; i<((d/2)+1) ; i++)
    {
        int temp=arr[i];
        arr[i] = arr[d-i];
        arr[d-i] = temp;
    }

    for(int i=0 ; i<n ; i++)
    {
       cout << arr[i] ;
    }
}