#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){

        int n,r;
        cin >> n >> r ;

        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i] ;
        }

        int tension[n];
        for(int i=0 ; i<n ; i++){
            cin >> tension[i];
        }

        if(n==1){
            cout << tension[0] << "\n";
            break;
        }

        int prev_tension = tension[0];
        int new_tension = tension[0];

        for(int i=1 ; i<n ; i++){

            new_tension += tension[i];

            prev_tension = max(prev_tension , new_tension);

            new_tension -= r*(arr[i]-arr[i-1]);
        }

        cout << prev_tension << "\n" ;
    }
}