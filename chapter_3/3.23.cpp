//int ��Ұ� 10���� ���͸� �����ϴ� �ñ׷��� �����. �ݺ��ڽ� ���� �� ��Һ��� ���� ���� 2�踦 �����ϰ� �� vector�� ����� Ȯ���Ѵ�.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	int n;
	
	for(int i = 0;i < 10;i++){
		cin >> n;
		v.push_back(n);
	}
	
	for(auto it = v.begin();it != v.end();it++){
		*it *= 2;
	}
	
	for(auto c : v)
		cout << c << ' ';
	return 0;
} 
