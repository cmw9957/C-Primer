//Sales_item.h헤더를 사용해 이 절에서 보여 준 서점 프로그램을 컴파일 한 후 실행한다.

#include<iostream>
#include"Sales_item.h"

int main(void){
	Sales_item total;
	
	if(std::cin >> total){
		Sales_item trans;
		while(std::cin >> trans){
			if(total.isbn() == trans.isbn())
				total += trans;
			else{
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
	}else{
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
} 
