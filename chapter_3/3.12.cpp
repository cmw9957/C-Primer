//���� vector ���ǿ��� ������ ���� ������ ã�´�. ������ � ���� �ϴ��� �����ϰ� ���� ������ �� �׷��� �����Ѵ�.

(a) vector<vector<int>> ivec;			//OK ��� Ÿ���� vector�� vector 

(b) vector<string> svec = ivec;			//ERROR �� vector ���Ÿ���� ���� ��ġ���� ���� 

(c) vector<string> svec(10, "null");	//OK svec vector�� null���ڿ��� 10�� �ʱ�ȭ 
