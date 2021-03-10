#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int a=n+1;
    int ans = 1;
    while((--a) >=1)
    {
        ans*=a;
    }
    return ans;

}
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n;
        cin >> n ;
        cout << fact(n) << "\n";
    }
}