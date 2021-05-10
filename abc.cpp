#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int tt;
    // cin >> tt;
    // while(tt--){
        int n = 32;;
		int MOD = 1000000007;
        
        cout << ((1<<n))%MOD << "\n";
        cout << ((1<<(n-1)))%MOD << "\n";
        cout << ((1<<(n-2)))%MOD << "\n";
// }
}