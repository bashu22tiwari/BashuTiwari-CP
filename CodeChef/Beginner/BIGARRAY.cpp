#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int n,s;
        cin >> n >> s;
        long long int sum = ((n)*(n+1))/2;
        cout << s-n+1 << "\n";
    }
}