#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int n , k;
        cin >> n >> k;
        long long int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }

        long long max = 0;
        for(long long int i=1 ; i<n ; i++){
            if(arr[i]>=arr[max]){
                max=i;
            }
        }

        cout << arr[max]*max << "\n";
    }
}