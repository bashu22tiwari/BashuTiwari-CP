#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int a,b,c,d,k;
        cin >> a >> b >> c >> d >> k;
        long long int key = abs(c-a) + abs(d-b);

        cout << key << " " << k << " ";

        if(key<k){
            if((k-key)%2==0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        else if(key==k){
            cout << "YES\n";
        }
        else if(key>k){
            if((key-k)%2==0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}