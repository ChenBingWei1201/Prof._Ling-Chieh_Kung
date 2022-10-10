#include <iostream>
using namespace std;

int main()
{
	int a1[5] = {0, 1, 2, 3, 4};
	int a2[5] = {0};
	for(int i = 0; i < 5; i++)
		a2[i] = a1[i];
		
	cout << a1[2] << "\n" << a2[2];
	
	return 0;
}

