#include <bits/stdc++.h>
using namespace std;

int main(){
    int *p1 = new int[1];
    int *p2 = new int[1];

    p1[0] = 1;
    // p1[1] = 1;
    // p1[2] = 1;
    // p1[3] = 1;
    // p1[4] = 1;

    
    p2[0] = 1;
    // p2[1] = 1;
    // p2[2] = 1;
    // p2[3] = 1;
    // p2[4] = 1;

    

    // cout << p1 << " " << p2 << endl;
    // cout << p1+1 << " " << p2+1 << endl;
    // cout << *p1 << " " << *p2 << endl;
    // cout << *p1+1 << " " << *p2+1 << endl;
    // cout << *(p1+1) << " " << *(p2+1) << endl;
    // cout << p1+2 << " " << *(p2+3) << endl;
    cout << p1-p2 ;
}