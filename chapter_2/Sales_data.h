//Sales_data.h 헤더를 직접 만들고 이를 사용해 2.6.2절 연습문제에서 만든 프로그램을 다시 만든다.

#ifndef SALES_DATA_H
#define SALES_dATA_H
#include<string>

struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};


#endif 
