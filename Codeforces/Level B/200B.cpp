#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    float o;
    int count=0;
    int b = n*100 ;
    while(n--)
    {
        int a;
        cin >> a;
        count+=a;
    }
    o=((float)count/b)*100; 
    cout << o ;
}