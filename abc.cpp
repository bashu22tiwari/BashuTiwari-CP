#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int n = 30;
        cin >> n;
		int MOD = 1000000007;
        int x=30;
        int repeat = n/x;
        int ones = n%x;
        int count1=0;
        int count2=0;
        
        if(ones==0){
            if(repeat==1){
                cout << (1<<(x-1))%MOD;
            }
            else if(repeat>1){
                count1 = (1<<x)%MOD;
                for(int i=2 ; i<repeat ; i++){
                    count1 = (count1*count1)%MOD;
                }

                count2 = (1<<(x-1))%MOD;

                cout << (count1*count2)%MOD;
            }
        }
        else if(ones>0){
            if(repeat>=1){
                count1 = (1<<x)%MOD;
                for(int i=2 ; i<=repeat ; i++){
                    count1 = (count1*count1)%MOD;
                }

                count2 = (1<<(ones-1))%MOD;

                cout << (count1*count2)%MOD;
            }
            else{
                cout << (1<<(ones-1))%MOD <<"\n";
            }
        }

        }
        
        
    }