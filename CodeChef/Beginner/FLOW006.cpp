#include <bits/stdc++.h>
using namespace std;

void printSum(int Num){
    int rem,sum=0;
    while(Num!=0){
        rem = Num%10;
        sum += rem;
        Num = Num/10;
    }
    cout << sum << "\n";
}

int main(){
int T;
long int N;
cin >> T;
while(T!=0){
    cin >> N ;
    printSum(N);
    T--;
}
return 0;
}
