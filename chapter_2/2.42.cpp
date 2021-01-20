//직접 만든 Sales_data 클래스를 사용해 1.5.1절 1.5.2절 1.6절 연습 문제에서 만든 프로그램을 다시 만든다. 
//지금은 Sales_data 클래스를 main함수와 같은 파일에 정의해야한다. 

#include<iostream>
#include<string.h>
#include"Sales_data.h"

void ex0(){
	Sales_data item;
	double price = 0.0;
	while(std::cin >> item.bookNo >> price >> item.unit_solds){
		item.revenue = price * item.unit_solds;
		std::cout << item.bookNo << " " << item.revenue << " " << item.unit_solds << std::endl;
	}
}

int ex1(){
	Sales_data data1, data2;
	double price_sum = 0.0;
	
	if(std::cin >> data1.bookNo >> data1.unit_solds >> price){
		data1.revenue = price * data1.unit_solds;
		if(std::cin >> data2.bookNo >> data2.unit_solds >> price){
			data2.revenue = price * data2.unit_solds;
			if(data1.bookNo == data2.bookNo){
				double totalPrice = data1.revenue + data2.revenue;
				unsigned totalUnits = data1.unit_solds + data2.unit_solds;
				std::cout << data1.bookNo << " " << totalPrice << " " << totalUnits << '\n';
				if(totalUnits != 0){
					std::cout << totalPrice / totalUnits << '\n';
				}else{
					std::cout << "No sales!" << '\n';
				}
			}else{
				std::cout << "data1 data2 are not same!" << '\n';
				return -1;
			}
		}else{
			std::cerr << "No data2's data!" << '\n';
			return -1;
		}
	}else{
		std::cerr << "No data1's data!" << '\n';
		return -1;
	}
	return 0;
}

int ex2(){
	Sales_data total, d;
	double price = 0;
	if(std::cin >> total.bookNo >> total.unit_solds >> price){
		total.revenue = price * total.unit_solds;
		while(std::cin >> d.bookNo >> d.unit_solds >> price){
			d.revenue = price * d.unit_solds;
			if(d.bookNo == total.bookNo){
				total.revenue += d.revenue;
				total.unit_solds += d.unit_solds;
			}else{
				std::cout << total.bookNo << " " << total.revenue << " " << total.unit_solds << " ";
				if(total.unit_solds != 0)
					std::cout << total.revenue / total.unit_solds << '\n';
				else
					std::cput << "No sales!" << '\n';
				total.bookNo = d.bookNo;
				total.revenue = d.revenue;
				total.unit_solds = d.unit_solds;
			}
		}
		std::cout << total.bookNo << " " << total.revenue << " " << total.unit_solds << " ";
		if(total.unit_solds != 0)
			std::cout << total.revenue / total.unit_solds << '\n';
		else
			std::cout << "No sales!" << '\n';
	}else{
		std::cout << "No data!!!!!" << '\n';
		return -1;
	}
	return 0;
}



int main(){
	
	return 0;
} 
