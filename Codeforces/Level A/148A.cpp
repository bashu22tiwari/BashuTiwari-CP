// Not completed

#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int k,l,m,n,d;
    cin >> k ;
    cin >> l ;
    cin >> m ;
    cin >> n;
    cin >> d;
    int i=1,count=0;
    while(i<=d)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            count++;
        }

        i++;
    }
    cout << count ;
}