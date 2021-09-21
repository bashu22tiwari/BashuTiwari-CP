#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int n,k;
        cin >> n >> k;
        vector<long long int> v;
        long long int maxVal = INT_MIN ;
        for(long long int i=0 ; i<n ; i++){
            long long int temp;
            cin >> temp;
            v.push_back(temp);
            maxVal = max(maxVal,temp);
        }

        unordered_set<long long int> s;
        for(long long int i=0 ; i<n ; i++){
            if(maxVal==v[i]){
                s.insert(i);
            }
        }

        long long int res;
        for(auto x : s){
            if(x+1>=k){
                res += n-x;
            }
        }
        cout << res << "\n";
    }
}