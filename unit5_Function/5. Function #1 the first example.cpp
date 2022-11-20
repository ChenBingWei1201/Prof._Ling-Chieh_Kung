#include <iostream>
using namespace std;

int add(int, int);
int main()
{
	int c = add(10, 20);
	cout << c ;
	return 0;
}
int add(int num1, int num2)
{
	return num1 + num2;
}
