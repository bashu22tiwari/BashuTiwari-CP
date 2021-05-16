#include <bits/stdc++.h>
using namespace std;


int findLitres(int k){
    if(k==1){
        return 100;
    }

    if(100%k==0){
        return 100/k;
    }
    else{
        return ;
    }
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int k;
        cin >> k;
        cout << findLitres(k) << "\n";
    }
}