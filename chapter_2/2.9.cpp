//다음 정의를 설명하고 올바르지 않으면 무엇이 잘못되었는지 설명하고 고친다.

(a) std::cin >> int input_value;		//변수는 반드시 입력 전에 선언 되어야한다. 

	int input_value;
	std::cin >> input_value; 

(b)	int i = {3.14};						//double형을 int형 i에 목록초기화를 사용할 수 없다. 

	double i ={3.14};

(c) double salary = wage = 9999.99;		//선언을 등호 연산자를 통해 묶을 수 없다. 

	double salary, wage;
	salary = wage = 9999.99;

(d)	int i = 3.14; 						//변수가 int형 이기 때문에 소수부가 잘려서 저장된다. 
