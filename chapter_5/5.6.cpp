//직접 만든 성적 프로그램을 if-else문 대신 조건 연산자를 사용해 다시 만든다. 

#include<iostream>
#include<vector> 
#include<string>
using namespace std;

int main(){
	int grade;
	string letter_grade;
	cout << "점수를 입력하세요" << '\n';
	cin >> grade;
	vector<string> V = {"F", "D", "C", "B", "A", "A++"};
		
	letter_grade = (grade < 60 ? V[0] : V[(grade - 50) / 10]); 
	
	cout << letter_grade << '\n';
	
}
