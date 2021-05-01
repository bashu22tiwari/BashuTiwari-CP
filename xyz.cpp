#include <bits/stdc++.h>
#define ll long long int
#define M 1000000007
using namespace std;

int main() {

    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] ;
    }

    ll q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        sum = (sum * 2) % M;
        cout << sum << endl;
    }

}