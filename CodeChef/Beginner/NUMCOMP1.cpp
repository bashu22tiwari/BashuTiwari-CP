
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;

    int total = 10000000;
    bool isPrime[total+1];
        for(long long int i=0 ; i<=total ; i++){
            isPrime[i] = true;
        }

    for(long long int i=2 ; i*i<=total ; i++){
            if(isPrime[i]){
                for(long long int j=i*i ; j<=total ; j=j+i){
                    isPrime[j]=false;
                }
            }
        }

    long long arr[total+1];
    long long int n=3;
    long long count=1;
    arr[2] = count;
    
    for(long long int i=3 ; i<=total ; i++){
            if(isPrime[i]){
                if(i*2>n){
                    count++;
                }
            }

            arr[n] = count;
            n++;
        }
        
        

    while(tt--){
        long long int n;
        cin >> n;

        

        cout << arr[n] << "\n";
    }
}