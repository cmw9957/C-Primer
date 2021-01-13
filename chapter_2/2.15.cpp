//다음 정의 중 잘못된 것이 있다면 어느 것이고 왜 그런지 설명한다.

(a) int ival = 1.01;		//true

(b)	int &rval1 = 1.01;		//false 참조자의 초기 값은 객체여야 한다.	

(c)	int &rval2 = ival;		//true

(d)	int &rval3; 			//false 참조자는 반드시 초기화 해주어야 한다. 
