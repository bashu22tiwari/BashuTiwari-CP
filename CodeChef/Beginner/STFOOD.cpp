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
        int nn;
        cin >> nn;
        int max=0;
        while(nn--)
        {
            int arr[3];
            for(int i=0;i<3;i++)
            {
                cin >> arr[i];
            }

            int people = arr[1]/(arr[0]+1);

            if(people*arr[2] > max)
            {
                max = people*arr[2];
            }
        }

        cout << max << "\n";
    }
}