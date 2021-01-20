//다음 프로그램을 컴파일해 클래스 정의에 세미콜론을 빠뜨리면 어떻게 되는지 확인하고, 후에 참고할 수 있도록 메시지를 잘 기억한다.

struct Foo {/* empty */}

int main(){
	
	return 0;
} 

//[Error]expected ';' after struct definition
