//다음 코드애서 하는 일을 설명한다.

const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
while(*cp){
	cout << *cp << endl;
	++cp;
}

ca를 가리키는 포인터 cp를 통해 ca에 저장된 문자들을 어딘가에 있을 널을 만날때 까지 출력한다. 
