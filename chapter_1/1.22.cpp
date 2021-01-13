//ISBN이 같은 거래 내용 몇개를 읽고 그 내용 모두의 합을 출력하는 프로그램을 작성

#include<iostream>
#include"Sales_item.h"

int main(void){
	Sales_item total = 0, item = 0;
	
	if(std::cin >> total){
		while(std::cin >> item){
			total += item;
		}
	}
	
	std::cout << total << std::endl;
	return 0;
} 
