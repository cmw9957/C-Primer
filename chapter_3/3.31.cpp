//int�� 10���� �迭�� �����ϴ� ���α׷��� �����. �� ��ҿ��� �迭 �� ��ġ�� ���� ���� �����Ѵ�.

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
