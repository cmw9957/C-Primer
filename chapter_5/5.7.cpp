//���� �� �ڵ忡�� ������ �����Ѵ�. 

(a)	if(ival1 != ival2)
		ival1 = ival2	//�����ݷ��� ���߷ȴ�. 
	else ival1 = ival2 = 0;

(b) if(ival < minval)	//�߰�ȣ�� ������ �����ؾ��Ѵ�. 
		minval = ival;
		occurs = 1;

(c)	if(int ival = get_value())	//ival�� �ٱ����� �����ؾ� ���� ���ǹ��� ���Ҽ��ִ�. 
		cout << "ival = " << ival << endl;
	
	if(!ival)
		cout << "ival = 0'\n";

(d) if(ival = 0)				//���� ���ǹ��� �׻� false�̴� ival == 0�� �����Ѵ�. 
	   ival = get_value();
