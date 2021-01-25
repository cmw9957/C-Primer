//iter가 vector<string>::iterator 라고 할 때 다음 표현식 중 적법한 것이 있으면 지시한다. 적법한 표현식은 어떻게 행동하는지 설명하고 위법인 것은 왜 오류인지 설명한다.

(a) *iter++				//OK

(b)	(*iter)++			//OK

(c) *iter.empty()		//ERROR

(d)	iter->empty()		//OK

(e) ++*iter				//ERROR	string은 증가 연산자가 없다. 

(f) iter++->empty()		//OK
