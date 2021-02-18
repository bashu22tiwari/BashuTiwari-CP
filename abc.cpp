#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t ;
    while (t--)
    {
        int n;
        cin >> n ;
        int array1[n][2];
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<2 ; j++)
            {
                cin >> array1[i][j];
            }
        }
        int max=array1[0][0];
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<2 ; j++)
            {
                if(array1[i][j]>max)
                {
                    max=array1[i][j];
                }
            }
            
        }

        

        
    }
    
}