//이 절에서 예로 든 변수 정의를 사용해 다음 표현식에서 어떤 변환이 일어나는지 설명한다.

float fval;		double dval;	int ival;		char cval;

(a)	if(fval)				//조건문에서 fval은 bool로 변환된다. 

(b)	dval = fval + ival;		//fval + ival의 표현식에서 ival은 float로 승격하고 fval + ival 오른쪽 피연산자는 왼쪽 피연산자인 dval의 타입 double로 승격한다. 

(c)	dval + ival * cval;		//결합 법칙에 의해 먼저 cval은 ival과의 곱으로 인해 int로 승격하고 이 표현식은 double형인 dval과의 산술로 인해 double로 승격한다. 
