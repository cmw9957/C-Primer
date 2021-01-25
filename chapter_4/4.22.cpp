//고득점 합격, 합격, 실패 등급을 대입하는 프로그램을 확장해 60이상 75 이하 점수에 대해 저득점 합격을 대입하도록 한다. 
//두 가지 버전을 만드는데, 하나는 조건 연산자만 사용하고 다른 하나는 if 문을 하나 이상 사용해야한다. 어느 것이 이해하기 더 쉬운지 이유와 함께 설명한다.

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
	    
	    
	//if문이 더 직관적이고 이해하기가 쉽다. 가독성을 위해서라면 if문을 사용해야만한다. 
} 
