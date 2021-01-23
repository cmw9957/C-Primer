//int 요소가 10개인 벡터를 생성하는 플그램을 만든다. 반복자슬 사요앻 각 요소별로 현재 값의 2배를 대입하고 이 vector를 출력해 확인한다.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	int n;
	
	for(int i = 0;i < 10;i++){
		cin >> n;
		v.push_back(n);
	}
	
	for(auto it = v.begin();it != v.end();it++){
		*it *= 2;
	}
	
	for(auto c : v)
		cout << c << ' ';
	return 0;
} 
