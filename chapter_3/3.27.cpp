//txt_size는 인자가 없으며 int 값을 반환하는 함수라고 가정할 때 다음 정의 중 옳지 않은 것을 찾고 이유를 설명한다.

unsigned buf_size = 1024;

(a) int ia[buf_size];				//Error buf_size는 상수 표현식이 아니다. 

(b) int ia[4 * 7 - 14];				//OK 

(c) int ia[txt_size()];				//Error txt_size()는 상수표현식이 아니다. constexpr이면 된다. 

(d) char st[11] = "fundamental";	//Error null을 포함한 공간도 포함해서 최소 12개가 되어야한다. 
