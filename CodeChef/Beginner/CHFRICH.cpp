#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        long long int a,b,x;
        cin >> a >> b >> x;
        cout << (a-b)/x << endl;
    }
}