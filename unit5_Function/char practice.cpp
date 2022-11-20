#include <iostream>
using namespace std;

int main( )
{
	char c1, c2, c3, c4, c5, c6, c7;
	int i = 0;
	
	c1 = 'g'; c2 = '7'; c3 = '<'; c4 = '\n';
	c5 = 63; c6 = '\101'; c7 = '\x61';
	i = c2;
	
	cout << "c1=" << c1 << " " << "c2=" << c2  << " " << "c3=" << c3 << " " << "c4=" << c4 << " " 
		 << "c5=" << c5 << " " << "c6=" << c6 << " " << "c7=" << c7 << " " << "i=" << i << "\n";
}
