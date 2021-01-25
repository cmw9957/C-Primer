//a, b, c, d 네 값에 대해 a는 b보다 크고, 이 하위 표현식은 c보다 크며 이 하위 표현식은 d보다 큰지 확인하는 표현식을 만든다.

#include<iostream>
using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if(a > b && b > c && c > d){
		//do something
	}
} 
