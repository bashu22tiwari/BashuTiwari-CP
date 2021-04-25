#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,m;
        cin >> n >> m;
        int x,y;
        cin >> x >> y;
        while(n--){
            string s;
            cin >> s;
            int solved=0;
            int partially=0;
            for(int i=0 ; i<m ; i++){
                if(s[i]=='F'){
                    solved++;
                }
                if(s[i]=='P'){
                    partially++;
                }
            }

            if((solved>=x) || (solved==(x-1) && partially>=y)){
                cout << "1";
            }
            else{
                cout << "0";
            }
        }
        cout << "\n";
    }
}