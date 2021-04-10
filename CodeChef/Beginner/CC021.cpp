#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

bool isPrime(int n){
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i < sqrt(n) / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

int main(){
    int L,R;
    cin >> L >> R ;

    int N;
    cin >> N;
    int maxHouses=0;
    int colonyNumber;
    int i=1;
    while(i<=N){
        int l,r;
        cin >> l >> r ;
        int a,b;
        int count=0;

        if((l>=L && l<=R) && (r>=L && r<=R)){
            a=l;
            b=r;
        }
        else if((l<=L) && (r>=L && r<=R)){
            a=L;
            b=r;
        }
        else if((l<=L) && (r>=R)){
            a=L;
            b=R;
        }
        else if((l>=L && l<=R) && (r>=R)){
            a=l;
            b=R;
        }
        else if(r==L){
            a=r;
            b=r;
        }
        else if(R==l){
            a=r;
            b=r;
        }

        for(int i=a ; i<=b; i++){
            if(isPrime(i)){
                count++;
            }
        }

        if(count>maxHouses){
            maxHouses=count;
            colonyNumber = i;
        }

        i++;



    }

    if(maxHouses==0){
        cout << "-1\n";
    }
    else{
        cout << colonyNumber << endl;
    }

}