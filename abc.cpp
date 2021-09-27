#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int a,b;
        cin >> a >> b;
        b = b*b;
        if(a==b){
            cout << "YES\n";
        }
        else if(a<b){
            b = b*b;
            if(b%a==0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        else{
            if(a%b==0){
                cout << "YES\n";
            }
            else{
                long long int rem = a%b;
                if(b%rem==0){
                    cout<<"YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
        }
    }
}