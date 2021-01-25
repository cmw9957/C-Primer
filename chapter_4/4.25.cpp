//int가 32비트이고 char 가 8비트인 시스템에서 ~'q' << 6 값은 무엇인지 설명한다. Latin-1 집합에서 'q' 비트 구성 형식은 01110001이다. 

#include<iostream>
using namespace std;

int main(){
	int p;
	
	p = ~'q' << 6;
	
	cout << p << '\n'; 	//-7296
}
