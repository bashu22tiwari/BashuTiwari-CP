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
        int seasons;
        int ans=0;
        int x ;
        // int k=0;
        cin >> seasons ;
        vector<int> introSongs;
        for(int i=0 ; i<seasons ; i++)
        {
            cin >> x ;
            introSongs.push_back(x) ;
        }
        int k=0;

        while(seasons--)
        {
            int i;
            cin >> i ;
            int arr[i];
            for(int j=0 ; j<i ; j++)
            {
                cin >> arr[j];
            }

            for(int j=0 ; j<i ; j++)
            {
                if(j==0)
                {
                    ans+=arr[j];
                }
                else if(j>0)
                {
                    ans+=arr[j]-introSongs[k];
                }
            }
            k++;
        }

        cout << ans << "\n" ;
    }
}