#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int temp = n/2;
        if(temp%2==0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            vector<int> a;
            vector<int> b;
            for(int i=1 ; i<=n ; i++){
                if(i<=temp/2 || i>n-(temp/2)){
                    a.push_back(i);
                }
                else{
                    b.push_back(i);
                }
            }

            for(int i=0 ; i<a.size() ; i++){
                cout << a[i] << " ";
            }
            cout << "\n";
            for(int i=0 ; i<b.size() ; i++){
                cout << b[i] << " ";
            }
        }
        cout << "\n";
    }
}