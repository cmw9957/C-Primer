//ISBN�� ���� �ŷ� ���� ��� �а� �� ���� ����� ���� ����ϴ� ���α׷��� �ۼ�

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
