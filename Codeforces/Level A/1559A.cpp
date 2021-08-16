#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt ;
    while(tt--){
        int n;
        cin >> n ;
        vector<int> v;
        for(int i=0 ; i<n ; i++){
            int abc;
            cin >> abc;
            v.push_back(abc);
        }

        int maxI = 0;
        for(int i=0 ; i<n ; i++){
            if(v[i]>v[maxI]){
                maxI = i ;
            }
        }

        int minval = INT_MAX ;
        for(int i=0; i<n ; i++){
            if(i!=maxI){
                minval = min(minval,v[i]&v[maxI]);
            }
        }

        cout << minval << "\n";

    }
}