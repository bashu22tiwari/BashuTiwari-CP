#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m,n;
    cin >> m >> n ;
    int s[m];
    for(int i=0 ; i<m ; i++){
        cin >> s[i];
    }
    int t[n];
    for(int i=0 ; i<n ; i++){
        cin >> t[i];
    }

    int flag0s = 0;
    int flag0t = 0;
    int flag1s = 0;
    int flag1t = 0;

    for(int i=0 ; i<m ; i++){
        if(s[i]==0){
            flag0s=1;
        }else{
            flag1s=1;
        }

        if(flag0s && flag1s){
            break;
        }
    }
    for(int i=0 ; i<n ; i++){
        if(t[i]==0){
            flag0t=1;
        }else{
            flag1t=1;
        }

        if(flag0t && flag1t){
            break;
        }
    }

    if(flag0s!=flag0t || flag1s!=flag1t){
        cout << "-1";
        break;
    }

    

    
}