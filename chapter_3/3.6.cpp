//���� for�� �̿��� string �� ��� ���ڸ� x�� �ٲ۴�.

#include<iostream>
using namespace std;

int main(){
	string s = "minwoo is jjang!";
	
	for(auto &c : s){
		if(c != 'x')
			c = 'x';
	}
	
	cout << s;
	return 0;
}
