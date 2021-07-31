#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int n;
        cin >> n ;
        int first[n];
        int second[n];
        for(int i=0 ; i<n ; i++){
            cin >> first[i];
        }
        for(int i=0 ; i<n ; i++){
            cin >> second[i];
        }

        string min = "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999";
        long long int minval = 0;
        long long int j = 0 ;
        for(long long int i=0 ; i<n ; i++){
            long long int x = 0 ;
            string temp = to_string((first[x]+second[j])%n);
            long long int k = (j+1)%n;
            x++;
            for( ; k!=j ; k=(k+1)%n){
                temp += to_string((first[x]+second[k])%n);
                x++;
            }

            if(temp<min){
                min = temp;
                minval = j;
            }

            j++;
        }

        long long res[n];

        for(int i=0 ; i<n ; i++){
            res[i] = ((first[i]+second[minval])%n);
            minval = (minval+1)%n;
            cou << res[i] << " ";
        }
        cout << "\n";
    }
}