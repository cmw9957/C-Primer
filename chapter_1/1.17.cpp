//�Է� ���� ������ �������� ���� ���α׷��� ��� �۵����� �����ϰ�, �ߺ� ���� ������ ��� ������ �����Ѵ�.

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

//�Է°��� ������ �� �ϳ��� �ߺ� ���� ���� �Է��� ����ŭ cnt�� �����ϰ� �ߺ����� ������ �Է��� �ߺ����� ����ŭ cnt�� ���� 1�� cnt �� ����Ѵ�. 