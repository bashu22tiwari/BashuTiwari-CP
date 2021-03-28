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
        int n,m;
        cin >> n >> m ;
        int arr[n];
        int flag=1;
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }
        int arrNew[m];
        for(int i=0 ; i<m ; i++)
        {
            arrNew[i]=0;
        }

        for(int i=0 ; i<n ; i++)
        {
            int j = arr[i]-1;
            arrNew[j]+=1;
        }

        for(int i=0 ; i<m ; i++)
        {
            if(arrNew[i]==0)
            {
                flag=0;
                break;
            }
            
        }
        if(flag==1)
        {
            cout << "No" << "\n";
        }
        else
        {
            cout << "Yes" << "\n";
         }
        
    }
}