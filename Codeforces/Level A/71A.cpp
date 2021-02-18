#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    while(n--)
    {
        char arr[101];
        cin >> arr ;
        int i=0;
        while(arr[i]!='\0')
        {
            i++;
        }
        if(i <= 10)
        {
            cout << arr << "\n" ;
        }
        else if(i>10)
        {
            cout << arr[0] << i-2 << arr[i-1] << "\n" ;
        }

    }
    return 0;
}