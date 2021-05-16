#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt ;
    while(tt--){
        long long int n,constant;
        cin >> n >> constant;
        long long int count=0;

        for(long long int i=1 ; i<n ; i++){
            for(long long int j=1 ; j<n ; j++){
                if(((constant%i)%j) == ((constant%j)%i)){
                    count++;
                }
            }
        }

        cout << count << "\n";

    }
}