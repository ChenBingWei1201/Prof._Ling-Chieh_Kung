#include <iostream>
using namespace std;

int add(int, int);
void test(int);
int mutiplication(int, int);

int main()
{
	int c = add(10, 20);
	int d = mutiplication(10, 20);
	cout << c << "\n" << d;
	return 0;
}

int add(int num1, int num2)
{
	test(num1);
	return num1 + num2;
}

int mutiplication(int num1, int num2)
{
	test(num2);
	return num1* num2;
}

void test(int toPrint)
{
	cout << toPrint << "\n";
}
