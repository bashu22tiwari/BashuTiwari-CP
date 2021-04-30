#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        long long int n,a,b;
        cin >> n >> a >> b;
        long long int a_point=0;
        long long int b_point=0;

        while(n--){
            string s;
            cin >> s;
            if(s[0]=='E' || s[0]=='Q' || s[0]=='U' || s[0]=='I' || s[0]=='N' || s[0]=='O' || s[0]=='X'){
                a_point+=a;
            }
            else{
                b_point+=b;
            }
        }
        if(a_point>b_point){
            cout << "SARTHAK" << "\n";
        }
        else if(b_point>a_point){
            cout << "ANURADHA" << "\n";
        }
        else{
            cout << "DRAW" << "\n";
        }
    }
}
