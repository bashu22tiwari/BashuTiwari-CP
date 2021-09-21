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
        vector<long long int> v;
        int maxRep = 1;
        for(long long int i=0 ; i<n ; i++){
            long long int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(),v.end());
        long long int maxRep = 1;
        long long int count = 1;

        for(long long int i=1; i<n ; i++){

        }

        if(maxRep>1){
            cout << n-maxRep << "\n";
        }
        else{
            cout << n-2 << "\n";
        }
    }

}