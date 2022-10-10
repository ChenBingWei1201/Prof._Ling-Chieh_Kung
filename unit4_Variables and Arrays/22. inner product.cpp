#include <iostream>
using namespace std;

int main()
{ 
	int a[4], b[4];
	for(int i = 0; i < 4; i++)
		cin >> a[i];
	for(int i = 0; i < 4; i++)
		cin >> b[i];
	
	int pi = 0;
	for(int i = 0; i < 4; i++)
	{
		pi += a[i] * b[i];
	}
	
	cout << pi;
	
	return 0;

}
