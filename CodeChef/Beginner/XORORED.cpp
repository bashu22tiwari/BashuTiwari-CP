#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n ;
        vector<int> v;
        for(int i=0 ; i<n ; i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        sort(v.begin(),v.end());

        int x = v[n-1];
        long long int sum=0;
        for(int i=0 ; i<n ; i++){
            v[i] = v[i]^x;
        }
        for(int i=1 ; i<n ; i++){
            v[0] = (v[i]||v[0]);
        }

        cout << x << " " << v[0] << "\n";
    }
}