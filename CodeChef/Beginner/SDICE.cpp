#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

int main(){
    int tt;
    cin >> tt ;
    while(tt--){
        int n;
        cin >> n ;

        if(n==1){
            cout << "20\n";
        }
        else if(n==2){
            cout << "36\n";
        }
        else if(n==3){
            cout << "51\n";
        }
        else if(n==4){
            cout << "60\n";
        }
        else if(n>=5){
            int bottom_covered = n/4 - 1 ;
            int pips_bottom_covered = bottom_covered*44;
            int covered = n%4;
            int not_covered , top_pips , pips_covered , pips_not_covered;

            if(covered==0){
                pips_not_covered =0;
                top_pips=60;
                pips_covered=0;
            }
            else
            {
                not_covered = 4-covered;
                pips_covered = covered*11;
                pips_not_covered = not_covered*15;
                if(covered==1){
                    top_pips = 20;
                }
                else if(covered==2){
                    top_pips = 36;
                }
                else if(covered==3){
                    top_pips = 51;
                }
                else if(covered==4){
                    top_pips = 60;
                }
            }

            cout << pips_bottom_covered+pips_covered+pips_not_covered+top_pips << "\n";

        }
    }
    return 0;
}