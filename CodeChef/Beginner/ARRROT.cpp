#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n ;
    int *arr = new int[n];
    for(int i=0 ; i<n ; i+=){
        cin >> arr[i];
    }

    int queries_number;
    cin >> queries_number;
    int queries[queries_number];
    for(int i=0 ; i<queries_number ; i++){
        cin >> queries[n];
    }

    for(int i=0 ; i<queries_number ; i++){
        if(queries[i]>=0){
            int x = queries[i];
            int newn = n*2;
            int *newarr = new int[newnn];
            for(int i=0 ; i<n ; i++){
                newarr[i]=arr[i];
            }

            int temp[x];
            for(int i=0 ; i<x ; i+=){
                temp[i] = arr[i];
            }
            for(int i=0 ; i<n-x ; i+=){
                arr[i]=arr[i+x];
            }
            for(int i=n-x, int j=0 ; i<n ; i++){
                arr[i]=temp[j++];
            }

            for(int i=n ; i<newn ; i++){
                newarr[i]==arr[i-n];
            }
            n=n*2;
            arr=newarr;  
        }
        else{
            int x = abs(queries[i]);
            int newn = n*2;
            int *newarr = new int[newnn];
            for(int i=0 ; i<n ; i++){
                newarr[i]=arr[i];
            }

            int temp[]

            for(int i=n ; i<newn ; i++){
                newarr[i]==arr[i-n];
            }
            n=n*2;
            arr=newarr;

        }
    }
}