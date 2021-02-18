#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string s1 ;
    cin >> s1 ;
    string s2[100] ;
    // int a = s1.size()/2 + 1 ;
    // char array[a] ;
    int j=0 ;
    for(int i=0 ; i<s1.size() ; i+=2)
    {
        s2[j]=s1[i];
        j++;
    }

    cout << s2 ;

    return 0;

}