#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int y;
    cin >> y ;
    while(1)
    {
        y++;
        int a=y ;
        int array[4];
        int flag=1;
        for(int i=0 ; i<4 ; i++)
        {
            array[i]=a%10;
            a=a/10;
        }

        for(int i=0 ; i<4 ; i++)
        {
            for(int j=i+1 ; j<4 ; j++)
            {
                if(array[i]==array[j])
                {
                    flag=0;
                    continue;
                }

            }
        }
        if(flag==1)
        {
            break;
        }

    }

    cout << y ;
}