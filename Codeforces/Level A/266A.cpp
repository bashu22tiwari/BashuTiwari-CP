#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    int count=0 ;
    cin >> n ;
    char arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
    }
    cout << count ;

}

