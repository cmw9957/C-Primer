//int�� vector�� ������ int �迭�� �ִ� ���α׷��� �����.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	vector<int> V(begin(arr), end(arr));
	int third_arr[100];
	
	for(int i = 0;i < V.size();i++){
		third_arr[i] = V[i];
		cout << third_arr[i] << ' ';
	}
		
	return 0;
}  
