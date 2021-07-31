#include <bits/stdc++.h>
using namespace std;

int gcd_recursive(int x, int y)
{
    if (y)
        return gcd_recursive(y, x % y);
    else
        return x;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int x,y;
        cin >> x >> y;
        if(x==1 && y==1){
            cout << "2\n";
        }
        else if(x==1 && y>1){
            if(y%2==0){
                cout << "1\n";
            }
            else{
                cout << "2\n";
            }
        }
        else if(x>1 && y==1){
            if(x%2==0){
                cout << "1\n";
            }
            else{
                cout << "2\n";
            }
        }
        else if(x>1 && y>1){
            int gcd = gcd_recursive(x,y);
            if(gcd>1){
                cout << "0\n";
            }
            else if(x%2==0 && y%2!=0){
                cout << "1\n";
            }
            else if(y%2==0 && x%2!=0){
                cout << "1\n";
            }
            else{
                cout << "2\n";
            }

                
            
            
        }
    }
}