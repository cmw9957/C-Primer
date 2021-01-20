//다음 코드에서 각 변수의 타입이 무엇인지, 코드를 마쳤을 대 각 변수의 값은 무엇인지 설명한다.

int a = 3, b = 4;		

decltype(a) c = a;		//int,	3			int c = a;

decltype((b)) d = a;	//int &,	3		int &d = a;

++c;					//4

++d; 					//4
