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
        int locations,servers;

        cin >> locations >> servers;

        int distance;
        if(locations%servers==0)
        {
            distance = locations/servers;
        }
        else
        {
            distance = locations/servers+1;
        }

        

        int pairs;
        // if(locations%distance==0)
        // {
        //     if(locations%servers==0)
        //     {
        //         pairs = servers;
        //     }
        //     else
        //     {
        //         pairs = (locations/distance) - 1;
        //     }
        // }
        // else
        // {
        //     pairs = locations/distance- 1; 
        // }

        int max = locations/distance;
        int rem = servers-max;
        if(rem==0)
        {
            pairs = servers;
        }
        else
        {
            int b = rem/distance;
            pairs = max - b - 1;
        }
        cout << distance << " " << pairs << "\n"; 
    }
}