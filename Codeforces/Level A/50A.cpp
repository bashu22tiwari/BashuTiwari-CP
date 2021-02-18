#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n ;
    int num;
    if((m*n)>=2)
    {
        num=(m*n)/2;
    }
    else
    {
        num =0;
    }

    cout << num << endl;
    
}