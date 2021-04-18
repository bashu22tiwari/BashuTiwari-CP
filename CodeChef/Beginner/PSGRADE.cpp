#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int a_min,b_min,c_min,t,a,b,c;
        cin >> a_min >> b_min >> c_min >> t >> a >> b >> c;

        if((a>=a_min) && (b>=b_min) && (c>=c_min) && (a+b+c>=t)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}