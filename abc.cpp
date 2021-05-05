#include<bits/stdc++.h>
using namespace std;

int main(){
	int tt;
	cin >> tt;
	while(tt--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int arr[26];
		for(int i=0 ; i<26 ; i++){
			arr[i] = 0;
		}
		int flag=1;

		arr[s[0]-'A']++;
		for(int i=1 ; i<n ; i++){
			if(s[i]==s[i-1]){
				arr[s[i]-'A']++;
			}
			if(s[i]!=s[i-1] && arr[s[i]-'A']!=0){
				flag=0;
				break;
			}
		}

		if(flag==1){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}
