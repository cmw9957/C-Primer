//while�� �̿��� 50���� 100���� ���� ���ϴ� ���α׷��� �ۼ�

#include<iostream>

int main(void){
	int v1 = 50, sum = 0;
	
	while(v1 <= 100){
		sum += v1;
		v1++;
	}
	std::cout << "Sum is " << sum << std::endl;
	return 0;
} 
