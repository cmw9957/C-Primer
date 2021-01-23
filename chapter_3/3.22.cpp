//text에서 첫 번째 단락을 출력하는 루프를 고쳐 첫 번째 단락에 해당하는 요소를 모두 대문자 로 바꾼다. text를 갱신하고 내용을 출력한다.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	
	string line;
	vector<string> text;
	
	//입력받은 문장 한줄씩 벡터에 저장 
	while(getline(cin, line))
		text.push_back(line);
		
	for(auto it = text.begin();it != text.end() && !it->empty();it++){
		for(auto &c : *it)
			c = toupper(c);
	}
	
	for(auto elem : text){
		if(elem.empty())
			cout << endl;
		else
			cout << elem << endl;
	}
	return 0;
}
