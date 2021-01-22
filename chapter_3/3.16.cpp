//연습문제 3.13에 있는 여러 vector의 크기와 내용을 출력하는 프로그램을 만들고 그 연습문제에 대한 답이 맞았는지 확인한다. 
//틀렸다면 이유를 이해할 때까지 3.3.1절을 다시 학습한다.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int> v1;					//비어있음 
	
	for(auto c : v1)
		cout << c << ' ';
	cout << '\n' << v1.size() << '\n';
	
	vector<int> v2(10);				//10개, 기본초기화로 0 
	
	for(auto c : v2)
		cout << c << ' ';
	cout << '\n' << v2.size() << '\n';
	
	vector<int> v3(10, 42);			//10개, 값은 42 
	
	for(auto c : v3)
		cout << c << ' ';
	cout << '\n' << v3.size() << '\n';
	
	vector<int> v4{10};				//1개, 값은 10 
	
	for(auto c : v4)
		cout << c << ' ';
	cout << '\n' << v4.size() << '\n';
	
	vector<int> v5{10, 42};			//2개, 값은 10과 42 
	
	for(auto c : v5)
		cout << c << ' ';
	cout << '\n' << v5.size() << '\n';
	
	vector<string> v6{10};			//10개, 비어있음 
	
	for(auto c : v6)
		cout << c << ' ';
	cout << '\n' << v6.size() << '\n';
	
	vector<string> v7{10, "hi"};	//10개 값은 문자열 "hi" 
	
	for(auto c : v7)
		cout << c << ' ';
	cout << '\n' << v7.size() << '\n';
	return 0;
} 
