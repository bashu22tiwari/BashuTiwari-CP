#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int n;
        cin >> n ;
        map<long long int,long long int> m;
        for(int i=0 ; i<n ; i++){
            long long int abc;
            cin >> abc ;
            
            if(m.find(abc)==m.end()){
                m[abc]=1;
            }
            else{
                m[abc]++;
            }
        }

        long long int sum = 0;
        long long int rem = n;

        for(auto i : m){
            long long int freq = i.second;
            rem = rem - freq;
            sum += (rem*2*freq);
        }

        cout << sum << "\n";
    }
}