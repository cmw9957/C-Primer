//�� string�� �а� ������ �˸��� ���α׷��� �����. �ٸ��� ��� ���� ū�� �˸����� �Ѵ�.
//���� string�� ���̰� ������, �ٸ��� ��� ���� �� ���� �˸����� ���α׷��� ��ģ��.

#include<iostream>
using namespace std;

int main(){
	string str1, str2;
	cin >> str1 >> str2;
	
	//������ �ٸ����� �� 
	if(str1 == str2){
		cout << "���� �����Դϴ�." << endl;
	}else{
		if(str1 < str2)
			cout << str1 << "�� " << str2 << "���� �۽��ϴ�." << endl;
		else
			 cout << str2 << "�� " << str1 << "���� �۽��ϴ�." << endl;
	}
	//���̰� ������ �ٸ����� ��
	if(str1.size() == str2.size()){
		cout << "���̰� �����ϴ�." << endl; 
	}else{
		if(str1.size() < str2.size())
			cout << str2 << "�� " << str1 << "���� ���̰� �� ��ϴ�." << endl;
		else
			 cout << str1 << "�� " << str2 << "���� ���̰� �� ��ϴ�." << endl;
	}
	return 0;
} 
