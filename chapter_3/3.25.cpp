//3.3.3���� �ִ� ������ ���� ���α׷��� ÷�� ��� �ݺ��ڸ� ����� �ٽ� �����.

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
