#include <iostream>
using namespace std;

int main ()
{
	int a = 0, b = 0, c = 0, max = 0;
	cin >> a >> b >> c;
	
	if(a >= b)
		(a >= c) ? (max = a) : (max = c);
	else
		max = (b >= c ? b : c);
		// b >= c ? max = b : max = c;
	
	cout << max << " is the biggest one\n"; 
	
	return 0;
}
