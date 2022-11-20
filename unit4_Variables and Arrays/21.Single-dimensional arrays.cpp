#include <iostream>
using namespace std;

int main()
{
	int score[5];
	for(int i = 0; i < 5; i++)
		cin >> score[i];
	for(int i = 0; i < 5; i++)
		cout << score[i] << " ";
	cout << score << "\n";
	cout << sizeof(score);
	return 0;
	//[i]是從存score的首位address offset(位移) i 個unit(4i個bytes)
	//而取那個address的值 
	//不是指取第i個 

}
