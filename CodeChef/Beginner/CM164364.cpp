#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt ;
    while(tt--){

        int n,x;
        cin >> n >> x ;
        long int arr[n];
        for(long int i=0 ; i<n ; i++){
            cin >> arr[i];
        }

        int diff = 1;

        for(long int i=0 ; i<n-1; i++){
            if(arr[i]!=arr[i+1]){
                diff++;
            }
        }

        int same = n-diff;

        if(x==n){
            cout << "0\n";
        }
        else if(x<=same){
            cout << diff << "\n";
        }
        else if(x>same){
            cout << diff - (x-same) << "\n";
        }

        
    }
}