//���� ���� ���� ���α׷��� if-else�� ��� ���� �����ڸ� ����� �ٽ� �����. 

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
		
	letter_grade = (grade < 60 ? V[0] : V[(grade - 50) / 10]); 
	
	cout << letter_grade << '\n';
	
}
