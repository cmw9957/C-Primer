//앞 연습 문제에 있는 변수를 사용해 다음 대입중 옳은 것을 찾고 이유를 설명한다.

(a) i = ic;

//OK 

(b) p1 = p3;

//ERROR p1은 int 형 p3는 const int 형이기 때문. 

(c) p1 = &ic;

//p1은 int 형 ic는 const int형 이기 때문.

(d) p3 = &ic;

//const라 값 변경 불가. 

(e) p2 = p1;

//const 포인터라 주소 변경 불가 

(f) ic = *p3; 

//const형이라 값 변경 불가. 
