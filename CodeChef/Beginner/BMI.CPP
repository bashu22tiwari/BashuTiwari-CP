#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int tt;
    cin >> tt ;
    while(tt--)
    {
        int h,m;
        int bmi;
        cin >> m >> h ;
        bmi = m/(h*h) ;
        if (bmi<=18)
        {
            cout << "1\n";
        }
        else if(bmi >= 19 && bmi <= 24)
        {
            cout << "2\n" ;
        }
        else if(bmi >= 25 && bmi <= 29)
        {
            cout << "3\n" ;
        }
        else if(bmi>=30)
        {
            cout << "4\n" ;
        }
    }
}