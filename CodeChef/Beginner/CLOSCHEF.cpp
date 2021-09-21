#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<long long int> v;
        for(int i=0 ; i<n ; i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        if(n==1){
            cout << "1\n";
        }

        unorderes_set<long long int> set;
        sort(v.begin() , v.end());
        
        if(set.find(v[0]*v[1])==v.end()){
            flag=0;
        }
        if(set.find(v[n-1]*v[n-2])==v.end()){
            flag=0;
        }

        if(flag==1){
            cout << "1\n";
        }
        else{
            cout << "0\n";
        }
    }
}