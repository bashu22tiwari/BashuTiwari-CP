#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string s1;
    cin >> s1 ;
    transform(s1.begin() , s1.end() , s1.begin() , ::tolower);
    s1.erase(remove(s1.begin(), s1.end(), 'a'), s1.end());
    s1.erase(remove(s1.begin(), s1.end(), 'e'), s1.end());
    s1.erase(remove(s1.begin(), s1.end(), 'i'), s1.end());
    s1.erase(remove(s1.begin(), s1.end(), 'o'), s1.end());
    s1.erase(remove(s1.begin(), s1.end(), 'u'), s1.end());
    s1.erase(remove(s1.begin(), s1.end(), 'y'), s1.end());
    
    int a=s1.size();
    int j=0,i=0;
    char array[2*a];

    while(j < 2*a)
    {
        if(j%2==0)
        {
            array[j]='.';
            j++;
        }
        else if(j%2!=0)
        {
            array[j]=s1[i];
            i++;
            j++;
        }
    }

    for(int i=0 ; i<2*a ; i++)
    {
        cout << array[i] ;
    }

    


    
    
}