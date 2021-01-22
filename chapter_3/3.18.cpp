//다음 프로그램은 옳은가? 옳지 않으면 어떻게 고칠수 있는가?

vector<int> ivec;
ivec[0] = 42;

옳지 않다. vector ivec는 초기화 되어있지도 않은데 첨자 연산자를 통해서 값을 수정하려하기 때문이다.

vector<int> ivec;
ivec.push_back(42);

로 수정하면 된다. 
