#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long D,d,P,Q;
        cin >> D >> d >> P >> Q;
        long long n = D/d;
        long long rem = D%d;

        long long nterm = P + (n-1)*Q;

        long long sum = (P+nterm);
        sum = sum*n;
        sum = sum/2;
        sum = sum + (nterm+Q)*rem;
        cout << sum << "\n";
    }
}