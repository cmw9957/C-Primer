//int�� 32��Ʈ�̰� char �� 8��Ʈ�� �ý��ۿ��� ~'q' << 6 ���� �������� �����Ѵ�. Latin-1 ���տ��� 'q' ��Ʈ ���� ������ 01110001�̴�. 

#include<iostream>
using namespace std;

int main(){
	int p;
	
	p = ~'q' << 6;
	
	cout << p << '\n'; 	//-7296
}
