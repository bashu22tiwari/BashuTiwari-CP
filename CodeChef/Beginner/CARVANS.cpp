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
            int n;
            cin >> n;
            long int arr[n];
            for(int i=0 ; i<n ; i++)
            {
                cin >> arr[i] ;
            }

            int count=0;
            long int min = arr[0];

            for(int i=0 ; i<n ; i++)
            {
                if(arr[i]<=min)
                {
                    count++;
                    min=arr[i];
                }
            }

            cout << count << endl ;
        }
    }