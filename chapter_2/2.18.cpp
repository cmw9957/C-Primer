//������ ���� �ٲٴ� �ڵ带 ����� �� �����ͷ� ����Ű�� ���� �ٲٴ� �ڵ带 �����.

#include<iostream>

int main(){
	int i = 0;
	int *p = &i;
	
	*p = 100;
	
	std::cout << i << std::endl;
	return 0;
} 
