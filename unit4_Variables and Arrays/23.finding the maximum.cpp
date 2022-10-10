#include <iostream>
using namespace std;

int main()
{
	const int VALUE_LEN = 10; //Á×§K potential inconsistency 
	float value[VALUE_LEN] = {0};
	
	for(int i = 0; i < VALUE_LEN; i++)
		cin >> value[i];
	
	float max = value[0];
	for(int i = 0; i < VALUE_LEN; i++)
	{
		if(value[i] >= max)
			max = value[i];
	}
	
	cout << max;
	
	return 0;
}

