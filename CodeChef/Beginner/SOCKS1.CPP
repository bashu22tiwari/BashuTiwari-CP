#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int a , b , c;
    cin >> a >> b >> c ;

    if(a==b || b==c || a==c){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}