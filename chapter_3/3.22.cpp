//text���� ù ��° �ܶ��� ����ϴ� ������ ���� ù ��° �ܶ��� �ش��ϴ� ��Ҹ� ��� �빮�� �� �ٲ۴�. text�� �����ϰ� ������ ����Ѵ�.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	
	string line;
	vector<string> text;
	
	//�Է¹��� ���� ���پ� ���Ϳ� ���� 
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
