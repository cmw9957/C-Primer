//����� �հ�, �հ�, ���� ����� �����ϴ� ���α׷��� Ȯ���� 60�̻� 75 ���� ������ ���� ������ �հ��� �����ϵ��� �Ѵ�. 
//�� ���� ������ ����µ�, �ϳ��� ���� �����ڸ� ����ϰ� �ٸ� �ϳ��� if ���� �ϳ� �̻� ����ؾ��Ѵ�. ��� ���� �����ϱ� �� ������ ������ �Բ� �����Ѵ�.

#include<iostream>
using namespace std;

int main(){
	int grade;
	cin >> grade;
	
	cout << (grade > 90 ? "high pass"
						: grade > 75 ? "pass"
									 : grade >= 60 ? "low pass"
									 			   : "fail") << '\n';
	
	
	if (grade > 90)
	    std::cout << "high pass" << std::endl;
	else if (grade > 75)
	    std::cout << "pass" << std::endl;
	else if (grade >= 60)
		std::cout << "low pass" << std::endl;
	else
	    std::cout << "fail" << std::endl;
	    
	    
	//if���� �� �������̰� �����ϱⰡ ����. �������� ���ؼ���� if���� ����ؾ߸��Ѵ�. 
} 
