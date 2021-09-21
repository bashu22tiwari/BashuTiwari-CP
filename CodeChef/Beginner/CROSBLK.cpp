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
        vector<int> v;
        long long int maxVal = INT_MIN ;
        map<long long int, long long int> mp;
        priority_queue<pair<long long int, long long int>> pq;

        for(long long int i=0 ; i<n ; i++){
            long long int temp;
            cin >> temp;
            v.push_back(temp)
            maxVal = max(temp,maxVal);
            mp[temp] = i;
        }

        for(auto x : mp){
            pq.insert({x.first,x.second});
        }



        if(v[0]!=maxVal){
            cout << "-1\n";
            continue;
        }

        long long int i = 0;
        long long count = 0;
        while(pq.size()!=0){
            long long int j = pq.top().second ;
            if(j>i){
                i=j;
                count++;
            }
            pq.pop();
        }

        cout << count << "\n";
    }
}