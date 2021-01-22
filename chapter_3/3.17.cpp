//cin에서 일련의 단어를 읽어 vector에 저장한다. 모든 단어를 읽은 후 vector를 처리해 각 단어를 대문자로 바꾼다.
//변환한 요소는 한 중에 여덟 단어씩 출력한다.

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
