//iter�� vector<string>::iterator ��� �� �� ���� ǥ���� �� ������ ���� ������ �����Ѵ�. ������ ǥ������ ��� �ൿ�ϴ��� �����ϰ� ������ ���� �� �������� �����Ѵ�.

(a) *iter++				//OK

(b)	(*iter)++			//OK

(c) *iter.empty()		//ERROR

(d)	iter->empty()		//OK

(e) ++*iter				//ERROR	string�� ���� �����ڰ� ����. 

(f) iter++->empty()		//OK
