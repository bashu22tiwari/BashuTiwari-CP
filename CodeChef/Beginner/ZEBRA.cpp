#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int n,k;
        cin >> n >> k;;
        string s;
        cin >> s;
        long long int invert = 0;
        for(int i=1 ; i<n ; i++){
            if(s[i]!=s[i-1]){
                invert++;
            }
        }
        if(k>invert){
            cout << "-1\n";
        }
        else if(k==invert){
            cout << n << "\n";
        }
        else{
            if((invert-k)%2==0){
                cout << n << "\n";
            }
            else{
                long long int ans = 0
                for(int i=n-2 ; i>=0 ; i++){
                    if(s[i]!=s[i+1]){
                        ans = i+1;
                    }
                }
                cout << ans << "\n";
            }
        }
    }
}