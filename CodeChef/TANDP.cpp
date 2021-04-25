#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,m;
        cin >> n >> m;
        int x,y;
        cin >> x >> y;
        int a,b;
        cin >> a >> b;

        int thief_x = n-x;
        int thief_y = m-y;

        int poilce_x = n-a;
        int police_y = m-b;

        int thief_moves = thief_x+thief_y;
        int police_moves = 0;

        if(poilce_x<=police_y){
            police_moves = police_y;
        }
        else{
            police_moves = poilce_x;
        }

        if(thief_moves<=police_moves){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}