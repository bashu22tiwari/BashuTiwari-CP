#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n ;
	string s ;
	cin >> s ;
	int flag=1;

	for(int i=0; i<n ; i++)
	{
		if(s[i]=='H' && s[i+1]=='H')
		{
			flag=0;
			break;
		}
	}	

	if(flag==1)
	{ 
		cout << "YES" << "\n" ;
		for(int i=0 ; i<n ; i++)
		{
			if(s[i]=='.')
			{
				s[i]='B';
		
			}
		}

		cout << s; 
	}

	else if(flag==0)
	{ 
		cout << "NO" << "\n" ; 
	}

return 0;
	
}


