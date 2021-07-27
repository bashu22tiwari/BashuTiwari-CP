#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int x,y;
        cin >> x >> y ;

        if(x+y>=6){
            cout << "0\n";
        }
        else if(x+y==2){
            cout << "0.666666\n";
        }
        else if(x+y==3){
            cout << "0.500000\n";
        }
        else if(x+y==4){
            cout << "0.333333\n";
        }
        else if(x+y==5){
            cout << ".166666\n";
        }
    }
}