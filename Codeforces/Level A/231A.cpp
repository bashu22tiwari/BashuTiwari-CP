#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0;
    cin >> n ;
    while(n--)
    {
        int petya,vasya,tonya;
        cin >> petya >> vasya >> tonya ;
        if((petya+vasya+tonya)>=2)
        {
            count++;
        }
    }
    cout << count ;
}