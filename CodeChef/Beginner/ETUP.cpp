#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n,q ;
        cin >> n >> q ;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }

        for(int i=0 ; i<q ; i++){
            int l,r;
            cin >> l >> r ;
            int count =0;
            for(int j=l-1 ; j<r-2 ; j++){
                for(int k=j+1 ; k<r-1 ; k++){
                    for(int z = k+1 ; z<r ; z++){
                        if((arr[z]+arr[j]+arr[k])%2==0){
                            count++;
                        }
                    }
                }
            }

            cout << count << "\n";
        }
    }
}