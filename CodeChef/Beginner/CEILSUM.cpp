#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int a,b;
        cin >> a >> b ;
        long long int avg = (a+b)/2;
        long long int sum = 0; 
        sum += ceil((double)(b-avg)/2);
        sum += ceil((double)(avg-a)/2);
        cout << sum << "\n" ;
    }
}