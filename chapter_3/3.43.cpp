//ia 요소를 출력하는 프로그램을 세 가지 다른 버전으로 만든다. 하나는 범위 for를 사용해 반복을 처리하고, 다른 둘은 for 루프에서 각각 첨자와 포인터를 사용한다.
//세 프로그램 모두 타입을 직접 써야한다. 즉 코드를 간단히 하기 위해 타입 별칭이나 auto, decltype을 사용하지 않는다.

#include<iostream>
using namespace std;

int main(){
	constexpr size_t c_row = 3;
    constexpr size_t c_col = 4;
	int ia[c_row][c_col] = {
		{0, 1, 2, 3},
	    {4, 5, 6, 7},
	    {8, 9, 10, 11}
	};
	//범위 
	for(const int (&row)[c_col] : ia){
		for(const int col : row)
			cout << col << '\t';
		cout << '\n';
	}
	cout << '\n';
	//포인터 
	for(int (*pr)[c_col] = ia;pr != ia + c_row;pr++){
		for(int *pc = *pr;pc != *pr + c_col;pc++)
			cout << *pc << '\t';
		cout << '\n';
	}
	cout << '\n';
	//첨자 
	for(size_t i = 0;i < c_row;i++){
		for(size_t j = 0;j < c_col;j++)
			cout << ia[i][j] << '\t';
		cout << '\n';
	}	
}
