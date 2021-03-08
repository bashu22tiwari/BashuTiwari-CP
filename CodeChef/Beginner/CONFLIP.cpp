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
        int Elephant_chances ;
        cin >> Elephant_chances;
        while(Elephant_chances--)
        {
            int input,coins,output;
            cin >> input >> coins >> output;
            if(coins%2==0)
            {
                cout << coins/2 << endl;
            }
            else
            {
                if(input==1)
                {
                    if(output==1)
                    {
                        cout << coins/2 << endl ;
                    }
                    else
                    {
                        cout << coins/2 +1 << endl;
                    }
                }
                else
                {
                    if(output==1)
                    {
                        cout << coins/2 +1 << endl;
                    }
                    else
                    {
                        cout << coins/2 << endl ;
                    }
                }
            }
        }
    }
}