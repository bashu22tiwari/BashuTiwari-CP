#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,m,q;
        cin >> n >> m >> q;
        int flag=1;
        int count=0;
        vector<int> v(n);
        while(q--){
            char abc;
            int temp;
            cin >> abc >> temp;
            if(abc=='-'){
                if(v[temp-1]==0){
                    flag=0;
                    break;
                }
                else{
                    v[temp-1]=0;
                    count--;
                }
            }
            else{
                if(v[temp-1]==1){
                    flag=0;
                    break;
                }
                else{
                    v[temp-1]=1;
                    count++;
                }

                if(count>m){
                    flag=0;
                    break;
                }
            }
        }

        if(flag){
            cout << "Consistent\n";
        }
        else{
            cout << "Inconsistent\n";
        }
    }
}