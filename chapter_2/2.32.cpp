//다음 코드가 옳은지 여부를 확인하고 옳지 않다면 어떻게 바로 잡을수 있는지 설명한다.

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
