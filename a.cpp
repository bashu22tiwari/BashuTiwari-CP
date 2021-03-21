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
    int i=1;
    while(tt--)
    {
        int length , k;
        cin >> length >> k;
        string word;
        cin >> word;
        int count=0;

        
            for(int i=1 ; i<=length/2 ; i++)
            {
                if(word[i]!=word[length-i+1])
                {
                    count++;
                }
            }
            cout << count << endl;

            if(k>=count)
            {
                cout << "Case #" << i << ": " << k-count << endl;
            } 
            else
            {
                cout << "Case #" << i << ": " << "0" << endl;
            }
        
        i++;
    }
}