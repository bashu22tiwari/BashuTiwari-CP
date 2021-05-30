#include <bits/stdc++.h>
using namespace std;

struct Interval{
    int st;
    int end;
}

bool myComp(Interval s1, Interval s2){
    return (s1.st<s2.st);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int N,K,F;
        cin >> N >> K >> F;
        
        Interval arr[N];

        for(int i=0 ; i<N ; i++){
            cin >> arr[i].st;
            cin >> arr[i].end;
        }

        sort(arr , arr+N , myComp);
        int res = 0;
        for(int i=1 ; i<N ; i++){
            if(arr[res].end>=arr[i].st){
                arr[res].end = max(arr[res].end,arr[i].end);
                arr[res].st = min(arr[res].st,arr[i].st);
            }
            else{
                res++;
                arr[res] = arr[i];
            }
        }

        int time = arr[0].st + K - arr[res].end;

        for(int i=1 ; i<res ; i++){
            time += arr[i].st - arr[i-1].end;
        }

        if(time>=K){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}