//앞 연습문제에 있는 변수와 대입을 사용해 프로그램을 만든다. 대입 앞뒤에서 각 변수를 출력해 앞 연습문제에서 예상한 내용이 맞는지 확인한다. 
//뭐가 잘못 됐는지 정확히 알 때까지 예제를 학습한다.

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
	
//	d = 42;	//ERROR		int에 대한 포인터 
	
//	e = 42;	//ERROR		const int에 대한 포인터 
	
//	g = 42;	//ERROR		const int 에 떄한 참조자 변경 불가 

	printf("%d %d %d %d", a, b, c, *d); 
} 


