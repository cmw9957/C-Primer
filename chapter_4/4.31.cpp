//이 절에서 예로 든 프로그램에서는 전위 증가와 감소 연산자를 사용했다. 후위가 아닌 전위 연산자를 사용한 이유를 설명한다. 
//후위 연산자를 사용하려면 무엇을 바꿔야하는지 설명하고 이를 사용해 프로그램을 다시 만든다.

vector<int>::size_type cnt = ivec.size();
for(vector<int>::size_type ix = 0;
				ix != ivec.size(); ++ix, --cnt)
	ivec[ix] = cnt;

//딱히 이유 없는거 같은데?후위로 바꾼다면 바꿔야 되는 것도 없다. 굳이 전위를 쓰는 이유는 후위 연산자로 반환되는 더하기 전 값은 필요가 없기 때문 조금이라도 가벼운 프로그램으로 만들기 위함 





//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(){
//	int cnt = 10;
//	for(int i = 0;i != 10;++i, --cnt)
//		cout << i << " " << cnt << '\n';
//}
