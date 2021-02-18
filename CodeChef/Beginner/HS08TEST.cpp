#include <iostream>

using namespace std;

int main() {
	int X;
	float Y;
	cin >> X >> Y ;
	
	if(X%5==0 && X+0.5<=Y && X<=2000 && Y<=2000.00 && X>0 && Y>=0.00)
	{
	    Y-=(X+0.5);
	}
	printf("%0.2f",Y);
}
