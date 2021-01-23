//앞 연습문제에서 정의한 배열을 다른 배열에 복사해 넣는다. vector를 사용해 이 프로그램을 다시 만든다.

#include<iostream>
using namespace std;

int main(){
	constexpr size_t size = 10;
	int arr[size] = {};
	
	for(size_t i = 0;i != size;i++)
		arr[i] = i;
	
	int another_arr[size] = {};
	for(size_t i = 0;i != size;i++){
		another_arr[i] = arr[i];
		cout << another_arr[i] << ' ';
	}
	//벡터라면 vector<int> v2(v1) 
		
	return 0;
}
