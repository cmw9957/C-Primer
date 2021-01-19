//다음 초기화 중 옳은 것을 찾고 이유를 설명한다.

(a)	int i = -1, &r = 0;

//ERROR &r 참조자는 상수를 참조할수 없다. 

(b) int *const p2 = &i2;

//OK 주소를 변경할 수없다. 

(c)	const int i = -1, &r = 0;

//OK const형 참조자는 상수를 참조할 수 있다. 

(d) const int *const p3 = &i2;

//OK

(e) const int *p1 = &i2;

//OK

(f) const int &const r2;

//ERROR 초기화를 하지 않았다. 

(g) const int i2 = i, &r = i;

//OK 
