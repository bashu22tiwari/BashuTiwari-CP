#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int N,M,K;
        cin >> N >> M >> K;
        int arr[M+N+1] = {0};
        int att[k];
        for(int i=0 ; i<K ; i++){
            cin >> att[i];
        }

        for(int i=0 ; i<K ; i++){
            if(att[i]>=1 && artt[i]<=N+M){
                arr[att[i]]++;
            }
        }

        int count=0;
        vector<int> v;

        for(int i=1 ; i<M+N+1 ; i++ ){
            if(arr[i]>1){
                count++;
                v.push_back(i);
            }
        }

        if(count==0){
            cout << "0\n"
        }
        else{
            cout << count << " ";
             for(int i=0 ; i<v.size() ; i++){
                 cout << v[i] << " ";
             }
             cout << "\n";
        }
    }
}