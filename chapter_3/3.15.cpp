//�տ��� ���� ���α׷��� �̹����� string�� �о� �����ϵ��� �Ѵ�.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	string n;
	vector<string> V;
	
	while(cin >> n){
		V.push_back(n);
	}
	for(auto c : V) cout << c << ' ';
	cout << (int)V.size();
	return 0;
}  
