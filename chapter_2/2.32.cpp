//���� �ڵ尡 ������ ���θ� Ȯ���ϰ� ���� �ʴٸ� ��� �ٷ� ������ �ִ��� �����Ѵ�.

#include<iostream>

int main(){
//	int null = 0, *p = null;
	
	int *p = nullptr;
	
	int const null = 0;
	int *p = null;
	
	int *p = NULL;
	
	constexpr int null = 0;
	int *p;
	
	int *p = 0;
	
	printf("%d", *p);
	return 0;
} 
