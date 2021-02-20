#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int array[4];
    for(int i=0 ; i<4 ; i++)
    {
        cin >> array[i] ;
    }

    for(int i=0 ; i<4 ; i++)
    {
        for(int j=i+1 ; j<4 ; j++)
        {
            if(array[i]==array[j])
            {
                array[j]=0;
            }
        }
    }
    int count=0;
    for(int i=0 ; i<4 ; i++)
    {
        if(array[i]==0)
        {
            count++;
        }
    }
    cout << count ;
}