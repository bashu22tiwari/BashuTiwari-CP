#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int tt;
    cin >> tt;
    while(tt--){
        int a,b,c;
        cin >> a >> b >> c ;
        // if((a%2==0 && b%2==0) || (a%2==0 && b%2==0)){
        //     cout << "-1\n";
        //     continue;
        // }

        if(abs(a-b)==1 && a>1 && b>1){
            cout << "-1\n";
             continue;
        }

        int diff = abs(a-b);
        int total = diff*2;

        if(a>total || b>total){
            cout << "-1\n";
             continue;
        }
        else if(c<1 || c>total){
            cout << "-1\n";
             continue;
        }
        else{
            if(c>=1 && c<=diff){
                cout << c+diff << "\n";
                 continue;
            }
            else{
                cout << c-diff << "\n";
                 continue;
            }
        }
        
    }
}