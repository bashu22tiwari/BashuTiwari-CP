#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{
    int array[5][5];
    int a,b ;
    for(int i=0;i<5;i++)
    {
        for(int j=0; j<5 ; j++)
        {
            cin >> array[i][j];
        }
    }
    
    for(int i=0;i<5;i++)
    {
        for(int j=0; j<5 ; j++)
        {
            if(array[i][j]==1)
            {
                a=abs(i-2);
                b=abs(j-2);
                break;
            }
        }
    }
    
    cout << a+b ;

}