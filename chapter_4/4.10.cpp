//표준 입력에서 int를 읽다가 읽은 값이 42와 같다면 중지하는 while 루프에 대한 조건을 만든다.

#include<iostream>
using namespace std;

int main(){
	int n;
	while(1){
		cin >> n;
		if(n == 42)	break;
	}
} 
