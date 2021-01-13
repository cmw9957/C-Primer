//입력 값이 같으면 이절에서 만든 프로그램이 어떻게 작동할지 설명하고, 중복 값이 없으면 어떻게 될지도 설명한다.

#include<iostream>

int main(void){
	int currval = 0, val = 0;
	
	if(std::cin >> currval){
		int cnt = 1;
		while(std::cin >> val){
			if(val == currval)
				++cnt;
			else{
				std::cout << currval << " occurs"
						  << cnt << " times" << std::endl;
				currval = val;
				cnt = 1;
			}
		}
		std::cout << currval << " occurs " << cnt << " times" << std::endl;
	}
	return 0;
}

//입력값이 같으면 그 하나의 중복 값에 대한 입력한 수만큼 cnt가 증가하고 중복값이 없으면 입력한 중복값의 수만큼 cnt의 값이 1인 cnt 를 출력한다. 
