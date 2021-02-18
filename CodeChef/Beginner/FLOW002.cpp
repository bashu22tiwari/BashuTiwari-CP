#include <bits/stdc++.h>
using namespace std;

void rem(int a, int b){
    int c;
    c=a%b;
    cout << c << "\n";
}

int main(){
    int T,A,B;
    cin >> T;
    while(T!=0){
        cin >> A >> B; 
        rem(A,B);
        T--;
    }
    return 0;
}