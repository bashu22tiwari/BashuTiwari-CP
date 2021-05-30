#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int k;
        cin >> k;
        int flag=1;
        while(k--){
            string s;
            cin >> s;
            for(int i=0 ; i<s.size() ; i++){
                if((s[i]<='a' && s[i]>='m') || (s[i]<='M' && s[i]>='Z')){
                    flag=0;
                    break;
                }
                if(s[0]>='a' && s[0]<='m'){
                    if(s[i]<='a' || s[i]>='m'){
                        flag=0;
                        break;
                    }
                }
                if(s[0]>='N' && s[0]<='Z'){
                    if(s[i]<'N' || s[i]>'Z'){
                        flag=0;
                        break;
                    }
                }
            }

            if(flag==0){
                break;
            }
        }

        if(flag==0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}