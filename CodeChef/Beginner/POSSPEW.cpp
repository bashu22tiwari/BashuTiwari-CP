#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        long long int n,k;
        cin >> n >> k;
        vector<long long int> v;
        long long int prev;
        vector<long long int> p;
        for(int i=0 ; i<n ; i++){
            long long int temp;
            cin >> temp;
            v.push_back(temp);
            if(temp>0){
                prev=i;
                p.push_back(i);
            }
        }

        if(p.size()==0){
            for(int i=0 ; i<n ; i++){
                cout << "0";
            }
            cout << "\n";
            continue;
        }

        unordered_map<int,int> mp;
        int next = p[0];
        for(int i=0 ; i<next ; i++){
            mp[i] = min(n-prev+i,next-i);
        }
        mp[next] = 0;
        int i=0;
        while(i<p.size()){
            prev = p[i];
            if(i+1<n){
                break;
            }
            
            for(int i=prev+1 ; i<next ; i++){
                mp[i]=min(i-prev,next-i);
            }
            i++;
        }

        int prev = p[p.size()-1];
        int next = p[0];
        for(int i=prev ; i<n ; i++){
            mp[i] = min(i-prev,n-i-next)
        }

        long long int count =0 ;
        for(auto x : mp){
            long long int temp = v[x.first];
            long long int time = x.second;
            if(time==0){
                count = 
            }
        }
    }
}