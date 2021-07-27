#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
       long long int n,k;
       cin >> n >> k ;
       long long sum=0;
       long long int a = pow(2,n)-1;
       long long int b = 0;
        while(k-- && a<b){
            sum+=(a^b);
            a--;
            b++;
        }

        cout << count << "\n";
    }
}