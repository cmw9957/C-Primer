//ISBN이 같은 Sales_item 객체 2개를 읽고 그 합을 출력하는 프로그램을 작성. 

#include<iostream>
#include"Sales_item.h"

int main(void){
	Sales_item val1 val2;
	
	std::cin >> val1 >> val2;
	std::cout << val1 + val2 << std::endl;
	
	return 0;
}
