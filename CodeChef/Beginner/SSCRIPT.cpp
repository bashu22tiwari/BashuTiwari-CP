#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main(){
    int tt;
    cin >> tt ;
    while(tt--)
    {
        int n,k;
        cin >> n >> k ;
        string s;
        cin >> s ;
        int count=0;
        int flag=0;
        
        for(int i=0 ; i<k ; i++)
        {
            if(s[i]=='*'){
                count++;
            }
        }
        if(count==k)
        {
            cout << "YES\n";
        }
        else
        {
            for(int i=k ; i<n ; i++)
            {
                if(s[i]=='*')
                {
                    count++;
                }
            
                if(s[i-k]=='*')
                {
                    count-- ;
                }

                if(count==k)
                {
                    flag=1;
                    break;
                }

            }

            if(flag==1){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}