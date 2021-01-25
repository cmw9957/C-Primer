//다음 대입은 위법이다. 이유와 함께 어떻게 고칠 수 있는지 설명한다.

double dval; int ival; int *pi;
dval = ival = pi = 0;

그 이유는 pi는 int에 대한 포인터이고 ival은 int이다. int에 대한 포인터 값은 int형으로 변환할 수 없기 때문이다. 

dval = ival = 0;
pi = 0; 

이렇게 고치면 된다. 
