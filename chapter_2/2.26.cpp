//다음에서 옳은 것을 찾고 옳지 않은 것은 이유를 설명한다.

(a) const int buf;

//const 인데 초기화를 하지 않았다. 

(b)	int cnt = 0;

(c)	const int sz = cnt;

(d)	++cnt; ++sz; 

//++sz는 틀렸다 const 이기 때문에 값을 바꿀수 없다. 
