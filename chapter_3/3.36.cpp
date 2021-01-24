//두 배열이 같은지 비교하는 프로그램을 만든다. 마찬가지로 두 vector에 대해 비교하는 프로그램도 만든다.

#include<iostream>
#include<vector>
using namespace std;

void using_array(){
	int arr1[5];
	int arr2[5];
	
	cout << "Enter arr1" << '\n';
	for(int i = 0;i < 5;i++)
		cin >> arr1[i];
	cout << "Enter arr2" << '\n';
	for(int i = 0; i < 5; i++)
		cin >> arr2[i];
	
	for(int i = 0; i < 5;i++)
		if(arr1[i] != arr2[i]){
			cout << "Not equal!" << '\n';
			return ;
		}
	cout << "Equal!" << '\n';
}

void using_vector(){
	vector<int> v1;
	vector<int> v2;
	
	int n;
	cout << "Enter v1" << '\n';
	for(int i = 0;i < 5;i++){
		cin >> n;
		v1.push_back(n);
	}
		
	cout << "Enter v2" << '\n';
	for(int i = 0;i < 5;i++){
		cin >> n;
		v2.push_back(n);
	}
	
	if(v1 == v2)
		cout << "Equal!" << '\n';
	else
		cout << "Not equal!" << '\n';
}

int main(){
//	using_array();
	using_vector();
	return 0;
} 
