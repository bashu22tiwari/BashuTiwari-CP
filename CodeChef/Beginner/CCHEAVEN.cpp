#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int l;
        cin >> l ;
        string s;
        cin >> s;
        int good=0;
        int bad=0;
        int flag=0;
        for(int i=0 ; i<l ; i++){
            if(s[i]=='1'){
                good++;
            }
            else{
                bad++;
            }

            if(good>=bad){
                flag=1;
                break;
            }
        }

        if(flag==1){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
}