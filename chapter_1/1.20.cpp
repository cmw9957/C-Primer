//Sales_item.h 파일을 사용해 책 판매 거래 내용 집합을 읽어 표준 출력에 각 거래 내용을 출력하는 프로그램을 작성

#include<iostream>
#include"Sales_item.h"

int main(void){
	Sales_item val;
	while(std::cin >> val)
		std::cout << val << std::endl;
	
	return 0;
}
