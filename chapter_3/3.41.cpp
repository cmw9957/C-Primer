//int �迭�� vector�� �ʱ�ȭ�ϴ� ���α׷��� �����.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	vector<int> V(begin(arr), end(arr));
	
	for(auto c : V)
		cout << c << ' ';
	return 0;
} 
