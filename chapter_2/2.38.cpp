//decltype�� auto ���̿� Ÿ�� �߷� ����� ���̸� �����Ѵ�. auto�� decltype�� ����� ���� Ÿ������ �߷��ϴ� ���� �ٸ� Ÿ������ �߷��ϴ� ���� �����.

decltype�� auto ������ �߷� ����� ���̴� decltype�� ǥ������ �������κ��� type�� �����ϰ� auto�� �����Ϸ����� �ʱⰪ�� ���� type�� �����Ѵٴ� ���̴�.
decltype�� ���� const�� �������� ������ auto�� ���� const�� �����Ѵ�. 

//���� Ÿ��

int i = 0;

auto a = i;				//int 

decltype(i) b;			//int

//�ٸ� Ÿ��

int i, &j = i;			

auto a = j;				//int

decltype(j) b;			//int &

const int i = 0;

auto a = i;				//int

decltype(i) b = 42;		//const int
