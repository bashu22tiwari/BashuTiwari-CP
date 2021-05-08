#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n,x,k;
        cin >> n >> x >> k;

        n=n+1;
        int k1 = (n)%k;

        if(x%k==0 || (x-k1)%k==0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}