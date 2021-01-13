//p가 int에 대한 포인터라고 가정하고 다음 코드를 설명한다.

if(p)	//p가 nullptr을 가리키고 있으면 실행을 하지 않는다. 
if(*p)	//p가 가지고 있는 주소값이 주소인 int 형 변수의 값이 0이 아니면 실행한다. 


//`if (p)` means if the pointer `p` is not null.

//`if (*p)` means if the object pointed by the pointer is not false (which means the object is not null or zero etc.).
