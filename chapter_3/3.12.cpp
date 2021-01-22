//다음 vector 정의에서 오류인 것이 있으면 찾는다. 옳으면 어떤 일을 하는지 설명하고 옳지 않으면 왜 그런지 설명한다.

(a) vector<vector<int>> ivec;			//OK 요소 타입이 vector인 vector 

(b) vector<string> svec = ivec;			//ERROR 두 vector 요소타입이 서로 일치하지 않음 

(c) vector<string> svec(10, "null");	//OK svec vector에 null문자열을 10개 초기화 
