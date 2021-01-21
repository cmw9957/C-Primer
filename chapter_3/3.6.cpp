//범위 for를 이용해 string 내 모든 문자를 x로 바꾼다.

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
