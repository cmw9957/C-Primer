//�� ���������� �ִ� ������ ������ ����� ���α׷��� �����. ���� �յڿ��� �� ������ ����� �� ������������ ������ ������ �´��� Ȯ���Ѵ�. 
//���� �߸� �ƴ��� ��Ȯ�� �� ������ ������ �н��Ѵ�.

#include<iostream>

int main(){
	int i = 0, &r = i;
	
	auto a = r;						//int
	
	const int ci = i, &cr = ci;		
	
	auto b = ci;					//int
	
	auto c = cr;					//int
	
	auto d = &i;					//int *
	
	auto e = &ci;					//const int *
	
	auto &g = ci; 					//const int&
	
	//2.33
	
	a = 42;	//OK
	
	b = 42;	//OK
	
	c = 42;	//OK
	
//	d = 42;	//ERROR		int�� ���� ������ 
	
//	e = 42;	//ERROR		const int�� ���� ������ 
	
//	g = 42;	//ERROR		const int �� ���� ������ ���� �Ұ� 

	printf("%d %d %d %d", a, b, c, *d); 
} 


