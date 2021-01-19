//다음 각 선언에서 객체에 사우이나 하위 cons가 있는지 찾는다.

const int v2 = 0;									//하위 

int v1 = v2;										//없음 

int *p1 = &v1, &r1 = v1;							//없음 

const int *p2 = &v2, *const p3 = &i, &r2 = v2; 		//p2 하위 p3 하위 상위 &r2 하위 
