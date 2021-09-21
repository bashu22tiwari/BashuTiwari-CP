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
        vector<string> v;
        for(int i=0 ; i<n ; i++){
            string s;
            cin >> s;
            v.push_back(s);
        }

        unordered_set<string> st(v.begin() , v.end());
        string res = v[0];
        for(int i=0 ; i<n; i++){
            if(res[i]=='1'){
                res[i]='0';
            }
            else{
                res[i]='1';
            }

            if(st.find(res)==st.end()){
                cout << res << "\n";
            }
        }
    }
}