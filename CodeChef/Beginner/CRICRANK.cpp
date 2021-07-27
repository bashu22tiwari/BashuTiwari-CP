#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int r1,w1,c1;
        cin >> r1 >> w1 >> c1;
        int r2,w2,c2;
        cin >> r2 >> w2 >> c2;
        int count1=0;
        int count2=0;

        if(r1>r2){
            count1++;
        }
        else{
            count2++;
        }

        if(w1>w2){
            count1++;
        }
        else{
            count2++;
        }

        if(c1>c2){
            count1++;
        }
        else{
            count2++;
        }

        if(count1>count2){
            cout << "A\n";
        }
        else{
            cout << "B\n";
        }

    }
}