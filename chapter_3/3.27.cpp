//txt_size�� ���ڰ� ������ int ���� ��ȯ�ϴ� �Լ���� ������ �� ���� ���� �� ���� ���� ���� ã�� ������ �����Ѵ�.

unsigned buf_size = 1024;

(a) int ia[buf_size];				//Error buf_size�� ��� ǥ������ �ƴϴ�. 

(b) int ia[4 * 7 - 14];				//OK 

(c) int ia[txt_size()];				//Error txt_size()�� ���ǥ������ �ƴϴ�. constexpr�̸� �ȴ�. 

(d) char st[11] = "fundamental";	//Error null�� ������ ������ �����ؼ� �ּ� 12���� �Ǿ���Ѵ�. 
