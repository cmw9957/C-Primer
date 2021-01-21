//구두점을 포함한 문자열을 읽고 구두점을 제외한 내용을 출력하는 프로그램을 만든다.

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
