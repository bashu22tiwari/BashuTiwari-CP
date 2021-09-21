#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int n;
        cin >> n;
        string s,p;
        cin >> s;
        cin >> p;
        long long int change =0;
        long long int matchzero = 0;
        long long int matchone = 0;
        long long int zero =0;
        long long int one = 0;
        for(long long int i=0 ; i<n ; i++){
            if(s[i]!=p[i]){
                change++;
                if(s[i]=='1'){
                    one++;
                }
                else{
                    zero++;
                }
            }
            else{
                if(s[i]=='1'){
                    matchone++;
                }
                else{
                    matchzero++;
                }
            }
        }
        if(one>0 && matchzero>0){
            cout << "YES\n";
        }
        else if(zero>0 && matchzero>0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }
}