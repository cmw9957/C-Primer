//���ڿ� ����� �ʱ�ȭ�� �� ���� �迭�� �����ϴ� ���α׷��� �����. 
//���� �� �迭�� ������ ������ ���� �� ��° ���� �迭�� �����ϰ� strcpy strcat�� ����� �ι迭�� �� ��°�� ������ �ִ´�. 

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	const char str1[] = "Minwoo";
	const char str2[] = "is jjang!";
	char sum_str[100];
	
	strcpy(sum_str, str1);
	strcat(sum_str, " ");
	strcat(sum_str, str2);
	
	cout << sum_str << '\n';
	
	return 0;
}
