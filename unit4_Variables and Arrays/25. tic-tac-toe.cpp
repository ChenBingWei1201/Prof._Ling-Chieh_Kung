#include <iostream>
using namespace std;

int main()
{
	int a[3][3] = {{1, 0, 1}, {0, 1, 0}, {0, 1, 1}};
	
	for(int i = 0; i < 3; i++) // rows
	{
		if((a[i][0] == a[i][1]) && (a[i][1] == a[i][2]))
			cout << a[i][0] << "\n" << "row";
	}
	
	for(int i = 0; i < 3; i++) // colums
	{
		if((a[0][i] == a[1][i]) && (a[1][i] == a[2][i]))
			cout << a[0][i] << "\n" << "colum";
	}
	
	if((a[0][0] == a[1][1]) && (a[1][1] == a[2][2]))
		cout << a[0][0] << "\n" << "daigonal"; //daigonals
	
	if((a[0][2] == a[1][1]) && (a[1][1] == a[2][0]))
		cout << a[0][0] << "\n" << "daigonal"; //daigonals

	
	return 0;
}

