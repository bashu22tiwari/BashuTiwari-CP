#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int k;
        cin >> k;
        long long int sum =0 ;
        for(long long int i=0 ; i<2k+1 ; i++){
            sum += __gcs((k+(i*i))  , (k+((i+1)*(i+1))))
        }
        cout << sum ;
    }
}