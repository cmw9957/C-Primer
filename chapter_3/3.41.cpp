//int 배열로 vector를 초기화하는 프로그램을 만든다.

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
