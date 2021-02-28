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
       int delivery , coupon ;
       cin >> delivery >> coupon ;
       int a1[3],b1[3];
       for(int i=0 ; i<3 ; i++)
       {
           cin >> a1[i] ;
       }
       for(int i=0 ; i<3 ; i++)
       {
           cin >> b1[i] ;
       }
       
       int a=0,b=0;
       for(int i=0 ; i<3 ; i++)
       {
           a+=a1[i];
           b+=b1[i];
       }

        int c=0,d=0;
        
       if(a>=150 && b>=150)
       {
           c = a+b+coupon;
           d = a+b+(2*delivery);
       }
       else if((a>=150 && b<150) || (a<150 && b>=150))
       {
           c = a+b+coupon+delivery;
           d = a+b+(2*delivery);
       }

       
       if(c==0 && d==0)
       {
           cout << "NO" << "\n" ;
       }
       else if(c<d)
       {
           cout << "YES" << "\n" ;
       }
       else
       {
           cout << "NO" << "\n";
       }
    }
}