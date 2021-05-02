#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,m;
    cin >> a >> m;
    int x=0;
    for(int i=1 ; i<m ; i++){
        if((a*i)%m==1){
            x=i;
            break;
        }
    }
    if(x==0){
        cout << "Does Not Exist";
    }
    else{
        cout << x ;
    }
}