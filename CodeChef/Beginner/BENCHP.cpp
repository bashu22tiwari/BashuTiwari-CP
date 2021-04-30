#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, weight_need , weight_rod;
        cin >> n >> weight_need >> weight_rod;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }

        if(weight_rod>=weight_need){
            cout << "YES" << "\n";
            continue;
        }

        sort(arr,arr+n);
        int i=0;
        int flag=0;
        while(i<(n-1)){
            if(arr[i]==arr[i+1]){
                weight_rod+=(2*arr[0]);
                if(weight_rod>=weight_need){
                    flag=1;
                    break;
                }

                i=i+2;
            }
            else{
                i++;
            }
        }

        if(flag==1){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }

    }
}