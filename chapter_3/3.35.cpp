//�����͸� ����� �迭 �� ��Ҹ� 0���� �����ϴ� ���α׷��� �����.

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
