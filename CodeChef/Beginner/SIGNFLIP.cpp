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
        long long int sum = 0;
        vector<long long int> v;
        for(long long int i=0 ; i<n ; i++){
            long long int temp;
            cin >> temp;
            if(temp>=0){
                sum += temp;
            }
            else{
                v.push_back(temp);
            }
        }

        sort(v.begin() , v.end());

        for(long long int j = 0 ; j<v.size() && k>0 ; j++,k--){
            sum += abs(v[i]); 
        }

        cout << sum << "\n";
    }
}