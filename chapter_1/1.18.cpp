//이 절에서 만든 프로그램을 컴파일하고 실행해 모두 같은 값을 입력한다. 
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
