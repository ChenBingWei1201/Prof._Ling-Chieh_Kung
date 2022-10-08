#include <iostream>
using namespace std;

int main()
{
	int num1 = 0, num2= 0;
	
	cout << "Please enter two numbers, seperate them with a space: ";
	cin >> num1 >> num2;
	
	while(num1 >= num2)
	{	
		cout<< "The number 1 is: " << num1 << "\n";
		num1 = num1 - 2;
		num2 = num2 + 1;
	}
	return 0;
}

