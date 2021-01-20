//이 절에서 예로 든 변수의 정의를 사용해 각 대입은 어떻게 되는지 설명한다.

int i = 0, &r = i;

auto a = r;						//int

const int ci = i, &cr = ci;		

auto b = ci;					//int

auto c = cr;					//int

auto d = &i;					//int *

auto e = &ci;					//const int *	포인터는 바탕 타입이 같아야 하기 때문 

auto &g = ci; 					//const int		참조자도 포인터와 같이 바탕 타입이 같아야 참조가 되기 때문 

//2.33

a = 42;	//OK

b = 42;	//OK

c = 42;	//OK

d = 42;	//ERROR		int에 대한 포인터 

e = 42;	//ERROR		const int에 대한 포인터 

g = 42;	//ERROR		const int 에 떄한 참조자 
