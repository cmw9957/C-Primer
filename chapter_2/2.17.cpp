//���� �ڵ忡�� ����ϴ� ������ �����ΰ�?

#include<iostream>

int main(){
	int i, &ri = i;
	
	i = 5;	ri = 10;
	
	std::cout << i << " " << ri << std::endl;
	return 0;
}
//10 10 
