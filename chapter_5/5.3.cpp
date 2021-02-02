//1.4.1절 프로그램의 while루프에서 구역을 사용하지 않도록 쉼표 연산자를 사용해 다시 만든다.
//새로만든 코드는 가시성이 좋아지는지 오히려 나빠지는지 설명한다.

#include<iostream>
using namespace std;

int main(){
	int sum = 0, val = 1;
	
	while(sum += val, ++val, val <= 10)
		;
	
	cout << sum;
}

//구역이 있는 while문과 가시성을 비교해보면 별 차이 없는 것 같다. 
