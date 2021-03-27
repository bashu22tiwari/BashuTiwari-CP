#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int sumArray(int arr[] , int n)
{
    int sum=0;
    for(int i=0 ; i<n ; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }
        
        int sum=0;
        sum = sumArray(arr,n);
        int even=0;
        int odd =0;

        for(int i=0 ; i<n;i++)
        {
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }


        if(sum%2==0)
        {
            cout << "0" << "\n";
        }
        else
        {
            if(odd==n)
            {
                cout << "-1" << "\n";
            }
            else
            {
                for(int i=0 ; i<n ; i++)
                {
                    if(arr[i]==2)
                    {
                        cout << "1" << "\n";
                        break;
                    }
                }
            }
        }
    }
}