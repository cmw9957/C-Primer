//�� ������ ���� �� ���α׷������� ���� ������ ���� �����ڸ� ����ߴ�. ������ �ƴ� ���� �����ڸ� ����� ������ �����Ѵ�. 
//���� �����ڸ� ����Ϸ��� ������ �ٲ���ϴ��� �����ϰ� �̸� ����� ���α׷��� �ٽ� �����.

vector<int>::size_type cnt = ivec.size();
for(vector<int>::size_type ix = 0;
				ix != ivec.size(); ++ix, --cnt)
	ivec[ix] = cnt;

//���� ���� ���°� ������?������ �ٲ۴ٸ� �ٲ�� �Ǵ� �͵� ����. ���� ������ ���� ������ ���� �����ڷ� ��ȯ�Ǵ� ���ϱ� �� ���� �ʿ䰡 ���� ���� �����̶� ������ ���α׷����� ����� ���� 





//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(){
//	int cnt = 10;
//	for(int i = 0;i != 10;++i, --cnt)
//		cout << i << " " << cnt << '\n';
//}