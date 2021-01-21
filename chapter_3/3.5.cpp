//표준 입력에서 string을 여럿 읽어 큰 string 하나로 결합한 후 결과를 출력하는 프로그램을 만든다. 다음으로, 각 string 사이에 빈칸을 넣어 출력하도록 프로그램을 고친다.

#include<iostream>
using namespace std;

int main(){
	string total_s, s;
	
	while(cin >> s){
		total_s += s + " ";
	}
	
	cout << total_s << endl;
	return 0;
} 
