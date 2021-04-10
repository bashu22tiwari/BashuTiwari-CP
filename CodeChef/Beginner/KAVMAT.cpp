#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int N,M,K;
        cin >> N >> M >> K;
        int arr[N][M];
        for(int i=0 ; i<N ; i++){
            for(int j=0 ; j<M ; j++){
                cin >>  arr[i][j];
            }
        }

            for (int i = 0; i < N; i++) {   
                for (int j = 0; j < M; j++) {
                    for (int p = 0; p < N; p++) {
                        for(int q = 0; q < M; q++) {
                            cout << arr[i+p][j+q] << " ";
                        }
                        cout << "\n";
                    }
                    cout << "**************";

                }
            }


    }
}