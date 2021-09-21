#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        vector<long long int> b(n-1);

        for(long long int i=0 ; i<n ; i++){
            long long int temp;
            cin >> temp;
            a[i] = temp;
        }
        for(long long int i=0 ; i<n-1 ; i++){
            long long int temp;
            cin >> temp;
            b[i] = temp;
        }

        sort(a.begin() , a.end());
        sort(b.begin() , b.end());

        if(n==2){
            if(b[0]<a[1]){
                cout << b[0]-a[0] << "\n";
            }
            else{
                if((b[0]-a[0] < b[0]-a[1])){
                    cout << b[0]-a[0] << "\n";
                }
                else{
                    cout << b[0]-a[1] << "\n";
                }
            }
            continue ;
        }

        int diff = INT_MAX;
        if((b[0]-a[0]) > 0 && (b[n-1] - a[n-1]) > 0){
            if((b[0]-a[0])==(b[n-1]-a[n-1])){
                diff = min(diff,(b[0]-a[0]));
            }
        }

        if((b[0]-a[1]) > 0 && (b[n-1] - a[n]) > 0){
            if((b[0]-a[1])==(b[n-1]-a[n])){
                diff = min(diff,(b[0]-a[1]));
            }
        }

        if((b[0]-a[0]) > 0 && (b[n-1] - a[n]) > 0){
            if((b[0]-a[1])==(b[n-1]-a[n])){
                diff = min(diff,(b[0]-a[0]));
            }
        }



        cout << diff << "\n";
    }
}