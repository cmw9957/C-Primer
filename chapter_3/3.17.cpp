//cin���� �Ϸ��� �ܾ �о� vector�� �����Ѵ�. ��� �ܾ ���� �� vector�� ó���� �� �ܾ �빮�ڷ� �ٲ۴�.
//��ȯ�� ��Ҵ� �� �߿� ���� �ܾ ����Ѵ�.

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	vector<string> v;
	string str;
	
	while(cin >> str){
		v.push_back(str);
	}
	
	for(auto &vec : v){
		for(auto &elem : vec)
			elem = toupper(elem);
	}
	
	for(decltype(v.size()) i = 0;i != v.size();i++){
		cout << v[i] << ' ';
		if(!((i + 1) % 8))
			cout << '\n';
	}
	return 0;
} 
