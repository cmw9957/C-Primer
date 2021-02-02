//if-else문을 사용해 수치 점수를 문자로 된 평점으로 바꾸는 프로그램을 직접 만든다.

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
	
	if(grade < 60)
		letter_grade = V[0];
	else
		letter_grade = V[(grade - 50) / 10];
	
	cout << letter_grade << '\n';
	
}
