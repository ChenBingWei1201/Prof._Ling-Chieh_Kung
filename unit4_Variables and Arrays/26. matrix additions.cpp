#include <iostream>
using namespace std;

int main()
{
	int a[2][3] = {0, 1, 2, 0, 1, 2};
	int b[2][3] = {3, 4, 5, 3, 4, 5};
	int c[2][3] = {0};
	
	for(int i = 0; i < 2; i++) 
		for(int j = 0; j < 3; j++)
			c[i][j] += a[i][j] + b[i][j];
	
	for(int i = 0; i < 2; i++) 
	{
		for(int j = 0; j < 3; j++)
			cout << c[i][j] << " ";		
		cout << "\n";
	}
	
	return 0;
}

