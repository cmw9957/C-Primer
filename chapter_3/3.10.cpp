//�������� ������ ���ڿ��� �а� �������� ������ ������ ����ϴ� ���α׷��� �����.

#include<iostream>
using namespace std;

int main(){
	string s = "minwoo, where are you going?";
	
	for(auto c : s){
		if(!ispunct(c))
			cout << c;
	}
	return 0;
}
