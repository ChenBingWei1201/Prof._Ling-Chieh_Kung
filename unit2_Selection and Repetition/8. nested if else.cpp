#include <iostream>
using namespace std;

int main ()
{
	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	
	if(a >= b)
	{
		if(a >= c)
			cout << a << " is the biggest one.\n";
		else
			cout << c << " is the biggest one.\n";
	}
	else
	{
		if(b >= c)
			cout << b << " is the biggest one.\n";
		else
			cout << c << " is the biggest one.\n";
	}
	
	return 0;
}
