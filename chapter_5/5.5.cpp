//if-else���� ����� ��ġ ������ ���ڷ� �� �������� �ٲٴ� ���α׷��� ���� �����.

#include<iostream>
#include<vector> 
#include<string>
using namespace std;

int main(){
	int grade;
	string letter_grade;
	cout << "������ �Է��ϼ���" << '\n';
	cin >> grade;
	vector<string> V = {"F", "D", "C", "B", "A", "A++"};
	
	if(grade < 60)
		letter_grade = V[0];
	else
		letter_grade = V[(grade - 50) / 10];
	
	cout << letter_grade << '\n';
	
}
