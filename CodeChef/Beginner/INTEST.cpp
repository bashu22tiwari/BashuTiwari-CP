#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,t;
    int count=0;
    cin >> n >> k ;
    while(n!=0){
    cin >> t ;
    
        if(t%k == 0)
        {
            count++;
        }
        n--;
    }
    cout << count;
}