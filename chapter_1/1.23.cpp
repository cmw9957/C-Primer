//거래 내용을 여럿 읽고 ISBN별로 거래 내용이 몇개인지 세는 프로그램을 작성

#include<iostream>
#include"Sales_item.h"

int main(void){
	Sales_item val1, val2;
	
	if(std::cin >> val1){
		int cnt = 1;
		while(std::cin >> val2){
			if(val1.isbn() == val2.isbn()){
				cnt++;
			}else{
				std::cout << val1.isbn() << " " << cnt << std::endl;
				val1 = val2;
				cnt = 1;
			}
		}
		std::cout << val1.isbn() << " " << cnt << std::endl;
	}
	return 0;
} 
