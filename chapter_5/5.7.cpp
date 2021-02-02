//다음 각 코드에서 오류를 수정한다. 

(a)	if(ival1 != ival2)
		ival1 = ival2	//세미콜론을 빠뜨렸다. 
	else ival1 = ival2 = 0;

(b) if(ival < minval)	//중괄호로 구역을 설정해야한다. 
		minval = ival;
		occurs = 1;

(c)	if(int ival = get_value())	//ival을 바깥에서 선언해야 밑의 조건문을 평가할수있다. 
		cout << "ival = " << ival << endl;
	
	if(!ival)
		cout << "ival = 0'\n";

(d) if(ival = 0)				//다음 조건문은 항상 false이다 ival == 0로 수정한다. 
	   ival = get_value();
