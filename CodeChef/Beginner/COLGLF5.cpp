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
        int n,m;
        cin >> n >> m ;
        int football[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> football[i];
        }

        int cricket[m];
        for(int i=0 ; i<m ; i++)
        {
            cin >> cricket[i];
        }
        
        int i=0,j=0,switchTime=0;
        int flag=0;

        while(i<n && j<m)
        {
            if(football[i]<cricket[j])
            {
                if(flag==1)
                {
                    switchTime++;
                    i++;
                    flag=0;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                if(flag==0)
                {
                    switchTime++;
                    j++;
                    flag=1;
                }
                else
                {
                    j++;
                }
            }

           
        }
        
         cout << switchTime+1<< "\n";
        
    }
}