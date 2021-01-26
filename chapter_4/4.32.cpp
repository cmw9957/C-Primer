//다음 루프를 설명한다.

constexpr int size = 5;
int ia[size] = {1, 2, 3, 4, 5};
for(int *ptr = ia, ix = 0;
    ix != size && ptr != ia + size;
	++ix, ++ptr){/*do something*/}
	
	
배열 ia의 크기인 5동안 반복문을 실행 
