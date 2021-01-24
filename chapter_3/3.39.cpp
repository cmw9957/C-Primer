//두 string을 비교하는 프로그램을 만든다. 이제 두 C 형식 문자열 값을 비교하는 프로그램을 만든다.

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
	string str1, str2;
	cin >> str1 >> str2;
	if(str1 == str2)
		cout << "Strings are same!" << '\n';
	else
		cout << "Not same!" << '\n';
	
	char str3[101], str4[101];
	
	cin >> str3 >> str4;
	
	if(!strcmp(str3, str4))
		cout << "Same!" << '\n';
	else
		cout << "Not same!" << '\n';
	return 0;
} 
