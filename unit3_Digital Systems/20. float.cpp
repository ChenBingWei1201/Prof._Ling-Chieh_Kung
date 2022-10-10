#include <iostream>
#include <climits>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	for(int i = 0; i < 100; i++)
	{
		float f = sqrt(i);
		cout << f << " " << setprecision(10) << f*f << " " ;
		cout << "\n";
	}
	 
	return 0;
}


