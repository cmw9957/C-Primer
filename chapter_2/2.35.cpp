//다음 각 정의에서 추론한 타입을 설명한다. 타입을 모두 설명한 후에는 프로그램을 만들어 맞는지 확인한다.

#include<iostream>

int main(){
	const int i = 42;
	
	auto j = i;					//int
	
	const auto &k = i;			//const int &
	
	auto *p = &i;				//const int *
	
//	const auto j2 = i, &k = i;	//const int, const int&    ERROR
	
	printf("%d %d %d", j, k, *p);
} 
