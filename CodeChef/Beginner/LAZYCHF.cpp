#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int x,m,d;
        cin >> x >> m >> d;
        cout << min(x*m,x+d) << "\n";
    }
}