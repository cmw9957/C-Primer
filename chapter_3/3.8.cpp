//ù��° ������������ ���� ���α׷��� while�� ��������  for ������ ����� ���� �ٽ� �����. ������ ����� ��� ���� ���� ������ ������ �������� �����Ѵ�.

//���� �������� ù�����̴�. �ֳ��ϸ� index�� ���� �������� �ʿ䵵���� �������̱� �����̴�. 

#include<iostream>
using namespace std;

string s = "minwoo is jjang!";

void using_for(){
	for(auto &c : s){
		if(c != 'x')
			c = 'x';
	}
	cout << s << endl;
}

void using_while(){
	decltype(s.size()) index = 0;
	while(index != s.size()){
		if(s[index] != 'x')
			s[index] = 'x';
		
		index++;
	}
	cout << s << endl;
}

void using_for_traditional(){
	for(decltype(s.size()) index = 0;index != s.size();index++){
		if(s[index] != 'x'){
			s[index] = 'x';
		}
	}
	cout << s << endl;
}

int main(){
//	using_for();
//	using_while();
//	using_for_traditional();
	return 0;
} 
