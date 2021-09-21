#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> mp{{1,1},{2,2},{3,4},{4,5},{5,7},{6,8},{7,10},{8,11},{9,14},{10,16},
    {11,17},{12,19},{13,20},{14,22},{15,25},{16,26},{17,28},{18,29}};
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int def = n/18;
        n=n%18;
        
        if(n==0 && def>=1){
            cout << (def-1)*30+mp[18] << "\n";
        }
        else if(def==0){
            cout << mp[n] << "\n";
        }
        else{
            cout << def*30+mp[n] << "\n";
        }
        
    }
}