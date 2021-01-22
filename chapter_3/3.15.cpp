//앞에서 만든 프로그램을 이번에는 string을 읽어 저장하도록 한다.

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
