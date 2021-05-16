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
        int MOD = 1000000007;
        int count = (pow(2,30))%MOD;
        n--;

        int repeat = n/30;
        int rem = n%30;

        for(int i=1 ; i<=repeat ; i++){
            count = (count*count)%MOD;
        }

        for(int i=1 ; i<=rem ; i++){
            count = (count*2)%MOD;
        }
        
        cout << count << "\n"



    }
}