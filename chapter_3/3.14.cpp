//cin ���� �Ϸ��� int�� �о� vector�� �����ϴ� ���α׷��� �����.

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
