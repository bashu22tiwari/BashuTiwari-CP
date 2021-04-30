#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(1){
        int rem = b%a;
        if(rem==0){
            return a;
        }
        b=a;
        a=rem;
    }
}


int main(){
    int a,b;
    // b is greater than a
    cin >> a >> b ;
    cout << gcd(a,b) ;
}