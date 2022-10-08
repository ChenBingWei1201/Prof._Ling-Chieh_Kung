#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	
	for(int i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	cout << sum << "\n";
	
	for(int i = 0, j = 0; i < 10 && j > -5; i++, j--)
		cout << i << " " << j << "\n";
	return 0;

}
