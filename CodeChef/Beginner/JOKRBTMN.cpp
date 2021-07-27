#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n,m,l;
        cin >> n >> m >> l;
        unordered_map<int,int> ma;
        for(int i=0 ; i<m ; i++){
            int temp;
            cin >> temp;
            for(int i=0 ; i<temp ; i++){
                int abc;
                cin >> abc;
                ma[abc] = i;
            }
        }

        int arr[l];
        for(int i=0 ; i<l ; i++){
            cin >> arr[i];
        }

        int count=1;
        for(int i=1 ; i<l ; i++){
            if(ma[arr[i]]!=ma[arr[i-1]]){
                count++;
            }
        }

        

        cout << count << "\n";
    }
}