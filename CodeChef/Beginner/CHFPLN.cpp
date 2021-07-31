#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        long long int n;
        cin >> n;
        long long int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[n];
        }

        
        vector<int> v(100001,0);

        for(long long int i=0 ; i<n ; i++){
            v[arr[i]]++;
        }

        long long int sum = 0;

        for(int i=2 ; i<=100000 ; i++){
            if(v[i]<i){
                sum += v[i];
            }
            else{
                sum += i-1 ;
            }
        }

    

        cout << sum << "\n";
    }
}