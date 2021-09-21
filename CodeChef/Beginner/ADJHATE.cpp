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
        vector<long long int> odd;
        vector<long long int> even; 
        for(long long int i=0 ; i<n ; i++){
            long long int temp;
            cin >> temp;
            if(temp%2==0){
                even.push_back(temp);
            }
            else{
                odd.push_back(temp);
            }
        }

        int oddsize = odd.size();
        int evensize = even.size();
        if(oddsize==evensize){
            int i=0 ;
            while(i<oddsize){
               cout << odd[i] << " " << even[i] << " "; 
            }
            cout << "\n";
        }
        else{
            cout << "-1\n";
        }
       
        
    }
}