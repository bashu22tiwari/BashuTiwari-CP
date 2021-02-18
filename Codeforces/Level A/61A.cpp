#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string s1;
    cin >> s1 ;
    string s2;
    cin >> s2 ;
    int a=s1.size();
    int array[a];
    for(int i=0 ; i<a ; i++)
    {
        if(s1[i]==s2[i])
        {
            array[i]=0;
        }
        else
        {
            array[i]=1;
        }
    }

    for(int i=0; i<a ;i++)
    {
        cout << array[i];
    }

}