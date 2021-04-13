#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

long long int floorSqrt(long long int x) 
{
    if(x>=1 && x<=3){
        return 1;
    }

    long long start_point = 1;
    long long end_point = x ;
    long long sqrt;
    while(start_point <= end_point){
        sqrt = (start_point+end_point)/2;
       if((sqrt*sqrt)==x) {
           break;
       }
        else if((sqrt*sqrt)<x){
            if(x/(sqrt*sqrt) == 0){
                break;
            }
            else{
                start_point = sqrt;
            }
        }
        else if((sqrt*sqrt)>x){
            end_point = sqrt+1;
        }
            
    }
    
    return sqrt;
}

int main(){
    long long int x;
    cin >> x ;

    cout << floorSqrt(x);

}