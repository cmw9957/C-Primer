//ǥ�� �Է¿��� �� ���� �� �پ� �д� ���α׷��� �����. �� ���α׷��� ���� �� ���� �� �ܾ �е��� �Ѵ�. 

#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string; 

int main(){
	string s;
	cout << "���� �� �д� ���α׷� (���� �Է½� ����)" << endl;
	while(getline(cin, s)){
		if(s.empty()) break;
		cout << s << '\n';
	}
	
	cout << "�� �ܾ �д� ���α׷� (EOF �Է½� ����)" << endl;
	while(cin >> s){
		cout << s << '\n';
	}
	
	return 0;
}
