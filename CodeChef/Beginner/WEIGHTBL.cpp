#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int w1,w2,x1,x2,m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;

        int weightIncrease = w2-w1;
        int minIncrease = x1*m;
        int maxIncrease = x2*m;

        if(weightIncrease>=minIncrease && weightIncrease<=maxIncrease)
        {
            cout << "1" << "\n";
        }
        else
        {
            cout << "0" << "\n";
        }


    }
}