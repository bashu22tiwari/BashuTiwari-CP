#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=30;
    int MOD = 1000000007;
    int count1 = (1<<n)%MOD;
    int count2 = (1<<n)%MOD;
    int count = (count1*count2)%MOD;
    cout << count1 << "\n";
    cout << count2 << "\n";
    cout << count << "\n";
    cout << (count*count)%MOD << "\n";
}