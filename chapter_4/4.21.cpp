//조건 연산자를 사용해 vector<int>에서 요소가 홀수인 것을 찾고 그런 요소 각각에 대해 값을 2배하는 프로그램을 만든다.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> V = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	for(auto it = V.begin();it != V.end();it++){
		if(*it % 2)
			*it *= 2;
	}
	
	for(auto c : V)
		cout << c << ' ';
} 
