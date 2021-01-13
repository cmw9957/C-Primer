//다음 출력문에서 적법한 것이 있으면 찾는다.

int main(void){
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */;
	std::cout << /* "*/" /* "/*" */;
	return 0;
} 
