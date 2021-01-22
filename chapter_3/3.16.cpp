//�������� 3.13�� �ִ� ���� vector�� ũ��� ������ ����ϴ� ���α׷��� ����� �� ���������� ���� ���� �¾Ҵ��� Ȯ���Ѵ�. 
//Ʋ�ȴٸ� ������ ������ ������ 3.3.1���� �ٽ� �н��Ѵ�.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int> v1;					//������� 
	
	for(auto c : v1)
		cout << c << ' ';
	cout << '\n' << v1.size() << '\n';
	
	vector<int> v2(10);				//10��, �⺻�ʱ�ȭ�� 0 
	
	for(auto c : v2)
		cout << c << ' ';
	cout << '\n' << v2.size() << '\n';
	
	vector<int> v3(10, 42);			//10��, ���� 42 
	
	for(auto c : v3)
		cout << c << ' ';
	cout << '\n' << v3.size() << '\n';
	
	vector<int> v4{10};				//1��, ���� 10 
	
	for(auto c : v4)
		cout << c << ' ';
	cout << '\n' << v4.size() << '\n';
	
	vector<int> v5{10, 42};			//2��, ���� 10�� 42 
	
	for(auto c : v5)
		cout << c << ' ';
	cout << '\n' << v5.size() << '\n';
	
	vector<string> v6{10};			//10��, ������� 
	
	for(auto c : v6)
		cout << c << ' ';
	cout << '\n' << v6.size() << '\n';
	
	vector<string> v7{10, "hi"};	//10�� ���� ���ڿ� "hi" 
	
	for(auto c : v7)
		cout << c << ' ';
	cout << '\n' << v7.size() << '\n';
	return 0;
} 
