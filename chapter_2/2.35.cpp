//���� �� ���ǿ��� �߷��� Ÿ���� �����Ѵ�. Ÿ���� ��� ������ �Ŀ��� ���α׷��� ����� �´��� Ȯ���Ѵ�.

#include<iostream>

int main(){
	const int i = 42;
	
	auto j = i;					//int
	
	const auto &k = i;			//const int &
	
	auto *p = &i;				//const int *
	
//	const auto j2 = i, &k = i;	//const int, const int&    ERROR
	
	printf("%d %d %d", j, k, *p);
} 
