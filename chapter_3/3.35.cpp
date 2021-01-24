//포인터를 사용해 배열 내 요소를 0으로 설정하는 프로그램을 만든다.

#include<iostream>
using namespace std;

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int *p = arr;
	
	for(int *beg = begin(arr), *last = end(arr); beg != last;beg++)
		*beg = 0;
	
	for(int i = 0; i < 5;i++)
		cout << *(p + i) << ' ';
	return 0;
} 
