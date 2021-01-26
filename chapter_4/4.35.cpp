//다음 정의를 사용해 암시적 타입 변환이 일어난다면 어떻게 일어나는지 설명한다.

char cval;	int ival;	unsigned int ui;

float fval;	double dval;

(a)	cval = 'a' + 3;					//'a' + 3의 int형이 char로 변환 

(b)	fval = ui - ival * 1.0;			//ival과 1.0에서 int에서 double로 변환 double 에서 unsigned int로 변환 마지막으로 float로 변환 

(c)	dval = ui * fval;				//unsigned int에서 float로 변환 마지막으로 double로 변환 

(d) cval = ival + fval + dval;		//int에서 float, float에서 double 마지막으로 char로 변환 
