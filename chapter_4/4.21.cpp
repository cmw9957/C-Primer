//���� �����ڸ� ����� vector<int>���� ��Ұ� Ȧ���� ���� ã�� �׷� ��� ������ ���� ���� 2���ϴ� ���α׷��� �����.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> V = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	for(auto it = V.begin();it != V.end();it++){
		if(*it % 2)
			*it *= 2;
	}
	
	for(auto c : V)
		cout << c << ' ';
} 
