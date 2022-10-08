#include <iostream>
using namespace std;

int main()
{
	int income = 0, tex = 0;
	
	cout << "Please enter your income: ";
	cin >> income;
	
	if(income <= 10000)
	{
		tex = income * 0.02;
	}
	else
	{
	 	tex = (income - 10000) * 0.08 + 200;
	}
	 cout << "Your tax is: $ " << tex;
	
	return 0;
	
}
