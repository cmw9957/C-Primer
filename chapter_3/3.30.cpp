//다음 코드애서 색인 오류를 확인한다.

constexpr size_t array_size = 10;

int ia[array_size];							//배열을 선언하고 초기화를 하지 않아서 오류가 발생. 

for(size_t ix = 1;ix <= array_size;++ix)
	ia[ix] = ix; 
