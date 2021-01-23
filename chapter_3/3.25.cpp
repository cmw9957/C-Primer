//3.3.3절에 있는 점수를 묶는 프로그램을 첨자 대신 반복자를 사용해 다시 만든다.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<unsigned> v(11, 0);
	unsigned grade;
	auto it = v.begin();
	while(cin >> grade){
		if(grade <= 100)
			++(*(it + grade / 10));
	}
	for(auto c : v)
		cout << c << ' ';
	return 0;
} 
