//���� �ʱ�ȭ �� ���� ���� ã�� ������ �����Ѵ�.

(a)	int i = -1, &r = 0;

//ERROR &r �����ڴ� ����� �����Ҽ� ����. 

(b) int *const p2 = &i2;

//OK �ּҸ� ������ ������. 

(c)	const int i = -1, &r = 0;

//OK const�� �����ڴ� ����� ������ �� �ִ�. 

(d) const int *const p3 = &i2;

//OK

(e) const int *p1 = &i2;

//OK

(f) const int &const r2;

//ERROR �ʱ�ȭ�� ���� �ʾҴ�. 

(g) const int i2 = i, &r = i;

//OK 
