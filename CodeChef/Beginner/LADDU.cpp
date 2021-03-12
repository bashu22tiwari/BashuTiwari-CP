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
        int n;
        cin >> n ;
        string origin;
        cin >> origin;
        int count=0 ;

    for(int i=0 ; i<n ; i++)
    {
       string type;
       cin >> type;
       if(type == "CONTEST_WON")
       {
           int rank;
           cin >> rank ;

           if(rank<=20)
           {
               count += (300+(20-rank));
           }
           else
           {
               count += 300 ;
           }
       }
       else if( type == "TOP_CONTRIBUTOR")
       {
           count += 300;
       }
       else if( type == "BUG_FOUND")
       {
           int severnity;
           cin >> severnity;

           count += severnity;
       }
       else if( type == "CONTEST_HOSTED")
       {
           count += 50;
       }
    }
    
    if(origin == "INDIAN")
    {
        cout << count/200 << "\n";
    }
    else
    {
        cout << count/400 << "\n" ;
    }
        
        
    }

   

}



    