//�� ������������ ������ �迭�� �ٸ� �迭�� ������ �ִ´�. vector�� ����� �� ���α׷��� �ٽ� �����.

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
	//���Ͷ�� vector<int> v2(v1) 
		
	return 0;
}
