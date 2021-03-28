#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int run_A , overs , score_b ;
    cin >> run_A >> overs >> score_b ;

    if(score_b+((20-overs)*6) > run_A)
    {
        cout<< "Yes" ;
    }
    else
    {
        cout << "No";
    }
}