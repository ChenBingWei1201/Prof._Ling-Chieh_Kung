#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	if(a == 0)
	{
		cout << a << "\n";
		int a = 10; // �쥻��a�Q�ð_�� 
		cout << a << "\n";
	} //�X�Fblock�Aa=10�N���F�A�Ҳդ� 
		cout << a << "\n"; //�X�F�o��block�Aa�N�^��쥻��value 
	return 0;

}
