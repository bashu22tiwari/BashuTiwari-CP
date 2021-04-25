#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt ;
    while(tt--){
        int x,y,xmin,ymin,d;
        cin >> x >> y >> xmin >> ymin >> d;
        
        if((x>=(xmin*d)) && (y>=(ymin*d))){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}