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
        int velocity_initial , velocity_needed, acc , dist;
        cin >> velocity_initial >> velocity_needed >> acc >> dist;
        if(velocity_initial<=velocity_needed)
        {
            cout << "Yes" << "\n" ;
        }
        else
        {
            double final_velocity;
            final_velocity = sqrt((velocity_initial*velocity_initial) - (2*acc*dist));

            if(final_velocity<=velocity_needed)
            {
                cout << "Yes" << "\n";
            }
            else
            {
                cout << "No" << "\n";
            }
        }
    }
}