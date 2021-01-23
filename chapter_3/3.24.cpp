//반복자를 사용해 3.3.3절 마지막 연습 문제를 다시 푼다. 

#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int> v;
	int n;
	
	while(cin >> n)
		v.push_back(n);
	
	//인접 요소 쌍 더하기 
	for(auto beg = v.begin(), end = v.end() - 1;beg != end;beg++)
		cout << *beg + *(beg + 1) << ' ';
	
	cout << endl;
	
	//처음과 마지막 요소 합, 두 번째와 마지막에서 두번째의 합 
	for(auto beg = v.begin(), end = v.end() - 1; beg <= end ;beg++, end--)
		cout << *beg + *end << ' ';
	
	return 0;
} 
