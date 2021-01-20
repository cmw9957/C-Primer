//decltype과 auto 사이에 타입 추론 방법의 차이를 설명한다. auto와 decltype을 사용해 같은 타입으로 추론하는 예와 다른 타입으로 추론하는 예를 만든다.

decltype과 auto 사이의 추론 방법의 차이는 decltype은 표현식의 형식으로부터 type을 유추하고 auto는 컴파일러에서 초기값을 통해 type을 유추한다는 점이다.
decltype은 상위 const를 무시하지 않지만 auto는 상위 const를 무시한다. 

//같은 타입

int i = 0;

auto a = i;				//int 

decltype(i) b;			//int

//다른 타입

int i, &j = i;			

auto a = j;				//int

decltype(j) b;			//int &

const int i = 0;

auto a = i;				//int

decltype(i) b = 42;		//const int
