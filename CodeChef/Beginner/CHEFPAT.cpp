#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;


int binarySearch(int array[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(array[mid]==key)
        {
            return mid;
        }
        else if(array[mid] < key)
        {
            s=mid+1;
        }
        else if(array[mid] > key)
        {
            e=mid-1;
        }

    }
    return 1;
}

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        int array1[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> array1[i] ;
        }

        int array2[n];
        for(int i=0 ; i<n ; i++)
        {
            array2[i]=array1[i];
        }

        sort(array2 , array2+n , greater<int>());

        

        

        for(int i=0; i<n ; i++)
        {
            int a=array1[i];
            int b=binarySearch(array2,n,a);
            cout << b+1 <<" "; 
            // array2[b]=0;
        }

        cout << "\n" ;
    }
}