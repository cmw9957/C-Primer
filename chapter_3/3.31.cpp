//int가 10개인 배열을 정의하는 프로그램을 만든다. 각 요소에는 배열 내 위치와 같은 값이 지정한다.

#include<iostream>
using namespace std;

int main(){
	constexpr size_t size = 10;
	int arr[size] = {};
	
	for(size_t i = 0;i < size;i++){
		arr[i] = i;
		cout << arr[i] << ' ';
	}
	return 0;
} 
