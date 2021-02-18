

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main() {
	int N,rem;
	cin >> N;										
	int array[N];
	int sum=0;

	for(int i=0 ; i<N ; i++)
	{
		cin >> array[i];
	}

	

	if(array[N-1]%10==0)
	{
		cout << "Yes" ;
	}
	else
	{
		cout << "No" ;
	}

}

