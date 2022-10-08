#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	if(a == 0)
	{
		cout << a << "\n";
		int a = 10; // 原本的a被藏起來 
		cout << a << "\n";
	} //出了block，a=10就死了，模組化 
		cout << a << "\n"; //出了這個block，a就回到原本的value 
	return 0;

}
