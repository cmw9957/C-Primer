//문자열 상수로 초기화한 두 문자 배열을 정의하는 프로그램을 만든다. 
//이제 두 배열을 연결한 내용을 담을 세 번째 문자 배열을 정의하고 strcpy strcat을 사용해 두배열을 세 번째에 복사해 넣는다. 

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	const char str1[] = "Minwoo";
	const char str2[] = "is jjang!";
	char sum_str[100];
	
	strcpy(sum_str, str1);
	strcat(sum_str, " ");
	strcat(sum_str, str2);
	
	cout << sum_str << '\n';
	
	return 0;
}
