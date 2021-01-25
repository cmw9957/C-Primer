//ptr은 int에 대한 포인터, vec은 vector<int>, ival은 int라고 할 때 각 표현식의 행동을 설명한다. 올바르지 않은 듯한 것이 있으면 어느 것인지 이유와 함께 설명하고 각각을 올바흐게 고친다.

(a) ptr != 0 && *ptr++			//먼저 ptr이 nullptr을 가리키는지를 평가하고 그렇지 않은 경우 다음 피연산자를 평가한다. 하지만 ptr다음 어떤 메모리 주소를 사용하는지 모르기 때문에 (*ptr)++로 수정한다. 

(b)	ival++ && ival				//ival이 0인지 아닌지를 먼저 평가한다음 후의 증가 연산자에 의해 오른쪽 피연산자의 값이 1 증가 한다. 

(c)	vec[ival++] <= vec[ival]	// <= 의 평가순서를 미정의이다. ++ival, vec[ival] <= vec[ival + 1]로 수정

&&는 short-circuit evaluation이기 때문에 평가 순서가 왼쪽에서부터 시작한다. 
