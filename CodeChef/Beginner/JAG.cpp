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
        long long int i=0;
        unordered_map<long long int,long long int> mp;
        for(long long int j=0 ; j<n ; j++){
            long long temp;
            cin >> temp;
            temp -=i ;
            i++;
            if(mp.find(temp)==mp.end()){
                mp[temp]=1;
            }
            else{
                mp[temp]++;
            }
        }

        if(mp.size()==1){
            cout << n << "\n";
        }
        else{
            cout << "1\n";
        }
    }
}