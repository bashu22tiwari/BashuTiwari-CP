#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tt;
    cin >> tt;
    while(tt--){
        long long int n,k;
        cin >> n >> k;
        string str;
        cin >> str;

        long long int distance = 0;
        
        for(long long int i=1 ; i<n ; i++){
            if(s[i]==s[i-1]){
                distance+=2;
            }
            else{
                distance+=1;
            }
        }

        while(k--){
            int q;
            cin >> q;

            if(n==1){
                cout << "0\n";
            }
            else if(n==2){
                if(distance==2){
                    distance=1;
                    cout << "1\n";
                }
                else{
                    distance=2;
                    cout << "2\n";
                }
            }
            else{
                if(q-1==0){
                    if(s[0]==s[1]){
                        distance--;
                    }
                    else{
                        distance++;
                    }
                    
                    if(s[0]=='1'){
                        s[0] = '0';
                    }
                    else{
                        s[0] = '1';
                    }

                    cout << distance << "\n";
                }
                else if(q==n){
                    if(s[n-1]==s[n-2]){
                        distance--;
                    }
                    else{
                        distance++;
                    }

                    if(s[n-1]=='1'){
                        s[n-1] = '0';
                    }
                    else{
                        s[n-1] = '1';
                    }

                    cout << distance << "\n";
                }
                else{
                    if(s[q-1]==s[q-2]){
                        distance--;
                    }
                    else{
                        distance++;
                    }

                    if(s[q-1]==s[q]){
                        distance--;
                    }
                    else{
                        distance++;
                    }

                    if(s[q-1]=='1'){
                        s[q-1] = '0';
                    }
                    else{
                        s[q-1] = '1';
                    }

                    cout << distance << "\n";
                }
            }
        }
    }
}