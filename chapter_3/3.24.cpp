//�ݺ��ڸ� ����� 3.3.3�� ������ ���� ������ �ٽ� Ǭ��. 

#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int> v;
	int n;
	
	while(cin >> n)
		v.push_back(n);
	
	//���� ��� �� ���ϱ� 
	for(auto beg = v.begin(), end = v.end() - 1;beg != end;beg++)
		cout << *beg + *(beg + 1) << ' ';
	
	cout << endl;
	
	//ó���� ������ ��� ��, �� ��°�� ���������� �ι�°�� �� 
	for(auto beg = v.begin(), end = v.end() - 1; beg <= end ;beg++, end--)
		cout << *beg + *end << ' ';
	
	return 0;
} 
