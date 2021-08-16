#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n,m,x;
        cin >> n >> m >> x;
        map<int,int> mp;
        for(int i=0 ; i<n ; i++){
            int abc;
            cin >> abc;
            mp.insert({abc,i+1});
        }

        for(auto it : mp){
            cout << it.first << " " << mp.second << "\n";
        }

    }
}