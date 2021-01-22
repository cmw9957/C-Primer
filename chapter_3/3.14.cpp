//cin 에서 일련의 int를 읽어 vector에 저장하는 프로그램을 만든다.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	vector<int> V;
	
	while(cin >> n){
		V.push_back(n);
	}
	for(auto c : V) cout << c << ' ';
	return 0;
} 
