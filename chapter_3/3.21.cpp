//3.3.3절 첫 번째 연습문제를 반복자를 사용해 다시 푼다.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int> v1;					//비어있음 
	
	for(auto c = v1.cbegin();c != v1.cend();c++)
		cout << *c << ' ';
	cout << '\n' << v1.size() << '\n';
	
	vector<int> v2(10);				//10개, 기본초기화로 0 
	
	for(auto c = v2.cbegin();c != v2.cend();c++)
		cout << *c << ' ';
	cout << '\n' << v2.size() << '\n';
	
	vector<int> v3(10, 42);			//10개, 값은 42 
	
	for(auto c = v3.cbegin();c != v3.cend();c++)
		cout << *c << ' ';
	cout << '\n' << v3.size() << '\n';
	
	vector<int> v4{10};				//1개, 값은 10 
	
	for(auto c = v4.cbegin();c != v4.cend();c++)
		cout << *c << ' ';
	cout << '\n' << v4.size() << '\n';
	
	vector<int> v5{10, 42};			//2개, 값은 10과 42 
	
	for(auto c = v5.cbegin();c != v5.cend();c++)
		cout << *c << ' ';
	cout << '\n' << v5.size() << '\n';
	
	vector<string> v6{10};			//10개, 비어있음 
	
	for(auto c = v6.cbegin();c != v6.cend();c++)
		cout << *c << ' ';
	cout << '\n' << v6.size() << '\n';
	
	vector<string> v7{10, "hi"};	//10개 값은 문자열 "hi" 
	
	for(auto c = v7.cbegin();c != v7.cend();c++)
		cout << *c << ' ';
	cout << '\n' << v7.size() << '\n';
	return 0;
}  
