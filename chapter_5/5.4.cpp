//다음 예 각각을 설명하고 발견한 문제가 있으면 바로 잡는다.

(a) while (string::iterator iter != s.end()){/*...*/}

	//iterator의 첫 요소를 가리키고 있지않다.
	//while문 밖에서 초기화를 해주어야한다.
	//string::iterator iter = s.begin()
	//while(iter != s.end()) 
	
	
(b) while(bool status = find(word)){/*...*/}
	if(!status){/**/}
	
	//status의 유효범위를 벗어나서 조건문을 실행하려 하고있다.
	//while문 밖에서 status를 초기화하거나 if조건문을 while 반복문 유효범위내에 실행 시키면 된다. 
