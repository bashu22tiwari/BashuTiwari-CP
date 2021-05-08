#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int count=0;
        for(int i=0 ; (1<<n)-1 ; i++){
            if((i^(i+1))==((i+2)^(i+3))){
                count++;
            }
        }

        cout << count << "\n";
    }
}