#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int k,n,w;
    cin >> k >> n >> w ;
    int array[w];
    int count=0;
    for(int i=0 ; i<w ; i++)
    {
        array[i]=(i+1)*k;
    }

    for(int i=0 ; i<w ; i++)
    {
        count+=array[i];
    }

    if(count>n)
    {
        cout << count-n;
    }
    else
    {
        cout << "0" ;
    }
    
}