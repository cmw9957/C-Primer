//표준 입력에서 한 번에 한 줄씩 읽는 프로그램을 만든다. 이 프로그램을 고쳐 한 번에 한 단어를 읽도록 한다. 

#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string; 

int main(){
	string s;
	cout << "한줄 씩 읽는 프로그램 (공백 입력시 종료)" << endl;
	while(getline(cin, s)){
		if(s.empty()) break;
		cout << s << '\n';
	}
	
	cout << "한 단어씩 읽는 프로그램 (EOF 입력시 종료)" << endl;
	while(cin >> s){
		cout << s << '\n';
	}
	
	return 0;
}
