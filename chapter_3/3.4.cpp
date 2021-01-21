//두 string을 읽고 같은지 알리는 프로그램을 만든다. 다르면 어느 것이 큰지 알리도록 한다.
//이제 string의 길이가 같은지, 다르면 어느 것이 더 긴지 알리도록 츠로그램을 고친다.

#include<iostream>
using namespace std;

int main(){
	string str1, str2;
	cin >> str1 >> str2;
	
	//같은지 다른지를 평가 
	if(str1 == str2){
		cout << "같은 문자입니다." << endl;
	}else{
		if(str1 < str2)
			cout << str1 << "이 " << str2 << "보다 작습니다." << endl;
		else
			 cout << str2 << "이 " << str1 << "보다 작습니다." << endl;
	}
	//길이가 같은지 다른지를 평가
	if(str1.size() == str2.size()){
		cout << "길이가 같습니다." << endl; 
	}else{
		if(str1.size() < str2.size())
			cout << str2 << "이 " << str1 << "보다 길이가 더 깁니다." << endl;
		else
			 cout << str1 << "이 " << str2 << "보다 길이가 더 깁니다." << endl;
	}
	return 0;
} 
