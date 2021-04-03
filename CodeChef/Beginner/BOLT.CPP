#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

float round(float final_time)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(final_time * 100 + .5);
    return (float)value / 100;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        float k1,k2,k3,v;
        cin >> k1 >> k2 >> k3 >> v ;
        float final_speed = k1*k2*k3*v;
        float final_time = (float)100/final_speed;
        // float ffinal_time= round(final_time);

        cout << final_time << endl;

        if(final_time < 9.58){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}