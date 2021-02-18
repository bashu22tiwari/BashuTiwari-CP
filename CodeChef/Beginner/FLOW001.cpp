#include <iostream>
using namespace std;

int main() {
	int T,A,B,sum=0;
	cin >> T;
	for (int i =1 ; i<=T ;i++) {
	    cin >> A >> B;
	    sum =A+B;
	    std::cout << sum << std::endl;
	    }
	return 0;
}
